from Config import operationMap
from typing import TextIO

class VMWriter:
    def __init__(self, outputFile: TextIO) -> None:
        self._outputFile = outputFile

    def writePush(self, segment: str, index: int) -> None:
        self._outputFile.write(f"push {segment} {index}\n")

    def writePop(self, segment: str, index: int) -> None:
        self._outputFile.write(f"pop {segment} {index}\n")
    
    def writeArithmetic(self, command: str) -> None:
        self._outputFile.write(f"{command}\n")

    def writeLabel(self, label: str) -> None:
        self._outputFile.write(f"label {label}\n")

    def writeGoto(self, label: str) -> None:
        self._outputFile.write(f"goto {label}\n")

    def writeIf(self, label: str) -> None:
        self._outputFile.write(f"if-goto {label}\n")

    def writeCall(self, name: str, nArgs: int) -> None:
        self._outputFile.write(f"call {name} {nArgs}\n")

    def writeFunction(self, name: str, nVars: int) -> None:
        self._outputFile.write(f"function {name} {nVars}\n")

    def writeReturn(self) -> None:
        self._outputFile.write("return\n")

    def writeOperation(self, operation: str) -> None:
        self.writeArithmetic(operationMap[operation])
