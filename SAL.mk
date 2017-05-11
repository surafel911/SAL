##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SAL
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/surafel911/AppData/Roaming/codelite/CodeLite_Workspace
ProjectPath            :=C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL
IntermediateDirectory  :=bin/obj/
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=surafel911
Date                   :=11/05/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/bin/g++.exe -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=bin/debug/libsal.a
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SAL.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)include/ 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := C:/mingw64/bin/ar.exe rcu
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O2 -Wall $(Preprocessors)
CFLAGS   :=  -g -O2 -Wall -std=c11 $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix) 



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(IntermediateDirectory) $(OutputFile)

$(OutputFile): $(Objects)
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(AR) $(ArchiveOutputSwitch)$(OutputFile) @$(ObjectsFileList) $(ArLibs)
	@$(MakeDirCommand) "C:\Users\surafel911\AppData\Roaming\codelite\CodeLite_Workspace/.build-debug"
	@echo rebuilt > "C:\Users\surafel911\AppData\Roaming\codelite\CodeLite_Workspace/.build-debug/SAL"

MakeIntermediateDirs:
	@$(MakeDirCommand) "bin/obj/"


bin/obj/:
	@$(MakeDirCommand) "bin/obj/"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix): src/sal_lib.c $(IntermediateDirectory)/src_sal_lib.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_lib.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_lib.c$(DependSuffix): src/sal_lib.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_lib.c$(DependSuffix) -MM src/sal_lib.c

$(IntermediateDirectory)/src_sal_lib.c$(PreprocessSuffix): src/sal_lib.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_lib.c$(PreprocessSuffix) src/sal_lib.c

$(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix): src/sal_vector.c $(IntermediateDirectory)/src_sal_vector.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_vector.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_vector.c$(DependSuffix): src/sal_vector.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_vector.c$(DependSuffix) -MM src/sal_vector.c

$(IntermediateDirectory)/src_sal_vector.c$(PreprocessSuffix): src/sal_vector.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_vector.c$(PreprocessSuffix) src/sal_vector.c

$(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix): src/sal_map.c $(IntermediateDirectory)/src_sal_map.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_map.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_map.c$(DependSuffix): src/sal_map.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_map.c$(DependSuffix) -MM src/sal_map.c

$(IntermediateDirectory)/src_sal_map.c$(PreprocessSuffix): src/sal_map.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_map.c$(PreprocessSuffix) src/sal_map.c

$(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix): src/sal_hash.c $(IntermediateDirectory)/src_sal_hash.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_hash.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_hash.c$(DependSuffix): src/sal_hash.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_hash.c$(DependSuffix) -MM src/sal_hash.c

$(IntermediateDirectory)/src_sal_hash.c$(PreprocessSuffix): src/sal_hash.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_hash.c$(PreprocessSuffix) src/sal_hash.c

$(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix): src/sal_algorithms.c $(IntermediateDirectory)/src_sal_algorithms.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_algorithms.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_algorithms.c$(DependSuffix): src/sal_algorithms.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_algorithms.c$(DependSuffix) -MM src/sal_algorithms.c

$(IntermediateDirectory)/src_sal_algorithms.c$(PreprocessSuffix): src/sal_algorithms.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_algorithms.c$(PreprocessSuffix) src/sal_algorithms.c

$(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix): src/sal_array.c $(IntermediateDirectory)/src_sal_array.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_array.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_array.c$(DependSuffix): src/sal_array.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_array.c$(DependSuffix) -MM src/sal_array.c

$(IntermediateDirectory)/src_sal_array.c$(PreprocessSuffix): src/sal_array.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_array.c$(PreprocessSuffix) src/sal_array.c

$(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix): src/sal_assert.c $(IntermediateDirectory)/src_sal_assert.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/src/sal_assert.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_assert.c$(DependSuffix): src/sal_assert.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_assert.c$(DependSuffix) -MM src/sal_assert.c

$(IntermediateDirectory)/src_sal_assert.c$(PreprocessSuffix): src/sal_assert.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_assert.c$(PreprocessSuffix) src/sal_assert.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r bin/obj/


