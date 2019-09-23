
import time
import numpy as np
import mmtf
import msgpack
from typing import List, Dict

import example
from example import CPPStructureData as CPPSD, decodeFromFile, decodeFromBuffer

class Empty:
    def __init__(self):
        pass

class Entity:
    def __init__(self,
                 chainIndexList,
                 description,
                 type_,
                 sequence):
        self.chainIndexList = chainIndexList
        self.description = description
        self.type = type_
        self.sequence = sequence

    def __repr__(self):
        return(f"chainIndexList: {self.chainIndexList}"
               f"description: {self.description}"
               f"type: {self.type}"
               f"sequence: {self.sequence}")



class GroupType:
    def __init__(self,
                 formalChargeList,
                 atomNameList,
                 elementList,
                 bondAtomList,
                 bondOrderList,
                 bondResonanceList,
                 groupName,
                 singleLetterCode,
                 chemCompType):
        self.formalChargeList = formalChargeList
        self.atomNameList = atomNameList
        self.elementList = elementList
        self.bondAtomList = bondAtomList
        self.bondOrderList = bondOrderList
        self.bondResonanceList = bondResonanceList
        self.groupName = groupName
        self.singleLetterCode = singleLetterCode
        self.chemCompType = chemCompType

    def __repr__(self):
        return (f"formalChargeList: {self.formalChargeList}"
                f" atomNameList: {self.atomNameList}"
                f" elementList: {self.elementList}"
                f" bondAtomList: {self.bondAtomList}"
                f" bondOrderList: {self.bondOrderList}"
                f" bondResonanceList: {self.bondResonanceList}"
                f" groupName: {self.groupName}"
                f" singleLetterCode: {self.singleLetterCode}"
                f" chemCompType: {self.chemCompType}")


class Transform:
    def __init__(self, chainIndexList: List[int], matrix: np.ndarray):
        self.chainIndexList = chainIndexList
        self.matrix = matrix


class BioAssembly:
    def __init__(self, transformList: List[Transform], name: str):
        self.transformList = transformList
        self.name = name


def transform_list_from_cpp(cpp_trans):
    transformList = []
    for trans in cpp_trans:
        transformList.append(
                Transform(trans["chainIndexList"], trans["matrix"]))
    return transformList


def bio_assembly_list_from_cpp(cpp_bio_a):
    bio_assembly_list = []
    for bio_a in cpp_bio_a:
        transformList = transform_list_from_cpp(bio_a["transformList"])
        name = bio_a["name"]
        bio_assembly_list.append(
            BioAssembly(transformList, name))
    return bio_assembly_list


def group_list_from_cpp(cpp_gl):
    group_list = []
    for cpp_gt in cpp_gl:
        group_list.append(
                GroupType(
                    cpp_gt["formalChargeList"],
                    cpp_gt["atomNameList"],
                    cpp_gt["elementList"],
                    cpp_gt["bondAtomList"],
                    cpp_gt["bondOrderList"],
                    cpp_gt["bondResonanceList"],
                    cpp_gt["groupName"],
                    cpp_gt["singleLetterCode"],
                    cpp_gt["chemCompType"]))
    return group_list


def entity_list_from_cpp(cpp_el):
    entity_list = []
    for cpp_e in cpp_el:
        entity_list.append(
                Entity(cpp_e["chainIndexList"],
                       cpp_e["description"],
                       cpp_e["type"],
                       cpp_e["sequence"]))
    return entity_list


class StructureData:
    def __init__(self, file_name=None, file_bytes=None):
        """

        Note:
            file and bytes are separated because it will be faster
            if you just let c++ handle the file (rather than have
            python read the bytes itself and pass them to c++)
        """
        if file_name:
            self.init_from_file_name(file_name)
        elif file_bytes:
            self.init_from_bytes(file_bytes)
        else:
            self.raw_init()

    def init_from_bytes(self, file_bytes: bytes):
        cppsd = CPPSD()
        decodeFromBuffer(cppsd, file_bytes, len(file_bytes))
        self.init_from_cppsd(cppsd)

    def init_from_file_name(self, file_name: str):
        cppsd = CPPSD()
        decodeFromFile(cppsd, file_name)
        self.init_from_cppsd(cppsd)

    def init_from_cppsd(self, cppsd: 'CPPStructureData'):
        self.mmtfVersion = cppsd.mmtfVersion
        self.mmtfProducer = cppsd.mmtfProducer
        self.unitCell = cppsd.unitCell()
        self.spaceGroup = cppsd.spaceGroup
        self.structureId = cppsd.structureId
        self.title = cppsd.title
        self.depositionDate = cppsd.depositionDate
        self.releaseDate = cppsd.releaseDate
        self.ncsOperatorList = cppsd.ncsOperatorList()
        self.bioAssemblyList = bio_assembly_list_from_cpp(cppsd.bioAssemblyList())
        # self.entityList = entity_list_from_cpp(cppsd.entityList())
        self.entityList = cppsd.entityList()
        self.experimentalMethods = cppsd.experimentalMethods
        self.resolution = cppsd.resolution
        self.rFree = cppsd.rFree
        self.rWork = cppsd.rWork
        self.numBonds = cppsd.numBonds
        self.numAtoms = cppsd.numAtoms
        self.numGroups = cppsd.numGroups
        self.numChains = cppsd.numChains
        self.numModels = cppsd.numModels
        # self.groupList = group_list_from_cpp(cppsd.groupList())
        self.groupList = cppsd.groupList()
        self.bondAtomList = cppsd.bondAtomList()
        self.bondOrderList = cppsd.bondOrderList()
        self.bondResonanceList = cppsd.bondResonanceList()
        self.xCoordList = cppsd.xCoordList()
        self.yCoordList = cppsd.yCoordList()
        self.zCoordList = cppsd.zCoordList()
        self.bFactorList = cppsd.bFactorList()
        self.atomIdList = cppsd.atomIdList()
        self.altLocList = cppsd.altLocList
        self.occupancyList = cppsd.occupancyList()
        self.groupIdList = cppsd.groupIdList()
        self.groupIdList = cppsd.groupIdList()
        self.groupTypeList = cppsd.groupTypeList()
        self.secStructList = cppsd.secStructList()
        self.insCodeList = cppsd.insCodeList
        self.sequenceIndexList = cppsd.sequenceIndexList()
        self.chainIdList = cppsd.chainIdList
        self.chainNameList = cppsd.chainNameList
        self.groupsPerChain = cppsd.groupsPerChain()
        self.chainsPerModel = cppsd.chainsPerModel()

        raw_properties = cppsd.raw_properties()
        raw_properties = msgpack.unpackb(raw_properties, raw=False)
        # print(type(raw_properties), len(raw_properties))
        self.bondProperties = raw_properties["bondProperties"]
        self.atomProperties = raw_properties["atomProperties"]
        self.groupProperties = raw_properties["groupProperties"]
        self.chainProperties = raw_properties["chainProperties"]
        self.modelProperties = raw_properties["modelProperties"]
        self.extraProperties = raw_properties["extraProperties"]

    def raw_init(self):
        self.mmtfVersion = None
        self.mmtfProducer = None
        self.unitCell = None
        self.spaceGroup = None
        self.structureId = None
        self.title = None
        self.depositionDate = None
        self.releaseDate = None
        self.ncsOperatorList = None
        self.bioAssemblyList = None
        self.entityList = None
        self.experimentalMethods = None
        self.resolution = None
        self.rFree = None
        self.rWork = None
        self.numBonds = None
        self.numAtoms = None
        self.numGroups = None
        self.numChains = None
        self.numModels = None
        self.groupList = None
        self.bondAtomList = None
        self.bondOrderList = None
        self.bondResonanceList = None
        self.xCoordList = None
        self.yCoordList = None
        self.zCoordList = None
        self.bFactorList = None
        self.atomIdList = None
        self.altLocList = None
        self.occupancyList = None
        self.groupIdList = None
        self.groupTypeList = None
        self.secStructList = None
        self.insCodeList = None
        self.sequenceIndexList = None
        self.chainIdList = None
        self.chainNameList = None
        self.groupsPerChain = None
        self.chainsPerModel = None
        self.bondProperties = None
        self.atomProperties = None
        self.groupProperties = None
        self.chainProperties = None
        self.modelProperties = None
        self.extraProperties = None

    def dump_to_file(self):
        raise NotImplementedError

    def dump_to_bytes(self):
        raise NotImplementedError


# print(dir(example))
# t = example.try_thing()
# print(t.this)
# print(t)
# t.three = 33
# print(t.three)

if __name__ == "__main__":
    start = time.time()
    # for x in range(10000):
    #     sd = StructureData(file_bytes=open("4lgr.mmtf", 'rb').read())
    #     # sd = StructureData("4lgr.mmtf")
    # stop = time.time()
    # python_t = stop-start
    # print("python", python_t)
    # print("1")

    start = time.time()
    for x in range(10000):
        sd = StructureData("4lgr.mmtf")
    stop = time.time()
    python_t = stop-start
    print("python", python_t)
    print("2")

# start = time.time()
# for x in range(1000):
#     sd = mmtf.parse("4lgr.mmtf")
# stop = time.time()
# python_t = stop-start
# print("python og", python_t)
#  
# start = time.time()
# for x in range(10000):
#     cppsd = CPPSD()
#     decodeFromFile(cppsd, "4lgr.mmtf")
# stop = time.time()
# cpp_t = stop-start
# print("cpp", cpp_t)
