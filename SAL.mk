##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SAL
ConfigurationName      :=Debug
WorkspacePath          :="C:/Users/Surafel Assefa/AppData/Roaming/codelite/CodeLite_Workspace"
ProjectPath            :="C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL"
IntermediateDirectory  :=bin/obj/
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Surafel Assefa
Date                   :=08/05/2017
CodeLitePath           :="C:/Program Files/CodeLite"
LinkerName             :=C:/mingw64/mingw64/bin/g++.exe
SharedObjectLinkerName :=C:/mingw64/mingw64/bin/g++.exe -shared -fPIC
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
OutputFile             :=bin/debug/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SAL.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/mingw64/bin/windres.exe
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
AR       := C:/mingw64/mingw64/bin/ar.exe rcu
CXX      := C:/mingw64/mingw64/bin/g++.exe
CC       := C:/mingw64/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O2 -Wall $(Preprocessors)
CFLAGS   :=  -g -O2 -Wall  -std=c11 $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_def.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix) $(IntermediateDirectory)/src_sal_list.c$(ObjectSuffix) $(IntermediateDirectory)/example_main.c$(ObjectSuffix) \
	



Objects=$(Objects0) 

##
## Main Build Targets 
##
.PHONY: all clean PreBuild PrePreBuild PostBuild MakeIntermediateDirs
all: $(OutputFile)

$(OutputFile): $(IntermediateDirectory)/.d $(Objects) 
	@$(MakeDirCommand) $(@D)
	@echo "" > $(IntermediateDirectory)/.d
	@echo $(Objects0)  > $(ObjectsFileList)
	$(LinkerName) $(OutputSwitch)$(OutputFile) @$(ObjectsFileList) $(LibPath) $(Libs) $(LinkOptions)

MakeIntermediateDirs:
	@$(MakeDirCommand) "bin/obj/"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "bin/obj/"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix): src/sal_lib.c $(IntermediateDirectory)/src_sal_lib.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_lib.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_lib.c$(DependSuffix): src/sal_lib.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_lib.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_lib.c$(DependSuffix) -MM src/sal_lib.c

$(IntermediateDirectory)/src_sal_lib.c$(PreprocessSuffix): src/sal_lib.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_lib.c$(PreprocessSuffix) src/sal_lib.c

$(IntermediateDirectory)/src_sal_def.c$(ObjectSuffix): src/sal_def.c $(IntermediateDirectory)/src_sal_def.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_def.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_def.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_def.c$(DependSuffix): src/sal_def.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_def.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_def.c$(DependSuffix) -MM src/sal_def.c

$(IntermediateDirectory)/src_sal_def.c$(PreprocessSuffix): src/sal_def.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_def.c$(PreprocessSuffix) src/sal_def.c

$(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix): src/sal_vector.c $(IntermediateDirectory)/src_sal_vector.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_vector.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_vector.c$(DependSuffix): src/sal_vector.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_vector.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_vector.c$(DependSuffix) -MM src/sal_vector.c

$(IntermediateDirectory)/src_sal_vector.c$(PreprocessSuffix): src/sal_vector.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_vector.c$(PreprocessSuffix) src/sal_vector.c

$(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix): src/sal_array.c $(IntermediateDirectory)/src_sal_array.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_array.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_array.c$(DependSuffix): src/sal_array.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_array.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_array.c$(DependSuffix) -MM src/sal_array.c

$(IntermediateDirectory)/src_sal_array.c$(PreprocessSuffix): src/sal_array.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_array.c$(PreprocessSuffix) src/sal_array.c

$(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix): src/sal_map.c $(IntermediateDirectory)/src_sal_map.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_map.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_map.c$(DependSuffix): src/sal_map.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_map.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_map.c$(DependSuffix) -MM src/sal_map.c

$(IntermediateDirectory)/src_sal_map.c$(PreprocessSuffix): src/sal_map.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_map.c$(PreprocessSuffix) src/sal_map.c

$(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix): src/sal_hash.c $(IntermediateDirectory)/src_sal_hash.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_hash.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_hash.c$(DependSuffix): src/sal_hash.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_hash.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_hash.c$(DependSuffix) -MM src/sal_hash.c

$(IntermediateDirectory)/src_sal_hash.c$(PreprocessSuffix): src/sal_hash.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_hash.c$(PreprocessSuffix) src/sal_hash.c

$(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix): src/sal_assert.c $(IntermediateDirectory)/src_sal_assert.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_assert.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_assert.c$(DependSuffix): src/sal_assert.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_assert.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_assert.c$(DependSuffix) -MM src/sal_assert.c

$(IntermediateDirectory)/src_sal_assert.c$(PreprocessSuffix): src/sal_assert.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_assert.c$(PreprocessSuffix) src/sal_assert.c

$(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix): src/sal_algorithms.c $(IntermediateDirectory)/src_sal_algorithms.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_algorithms.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_algorithms.c$(DependSuffix): src/sal_algorithms.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_algorithms.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_algorithms.c$(DependSuffix) -MM src/sal_algorithms.c

$(IntermediateDirectory)/src_sal_algorithms.c$(PreprocessSuffix): src/sal_algorithms.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_algorithms.c$(PreprocessSuffix) src/sal_algorithms.c

$(IntermediateDirectory)/src_sal_list.c$(ObjectSuffix): src/sal_list.c $(IntermediateDirectory)/src_sal_list.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/src/sal_list.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_sal_list.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_sal_list.c$(DependSuffix): src/sal_list.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_sal_list.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_sal_list.c$(DependSuffix) -MM src/sal_list.c

$(IntermediateDirectory)/src_sal_list.c$(PreprocessSuffix): src/sal_list.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_sal_list.c$(PreprocessSuffix) src/sal_list.c

$(IntermediateDirectory)/example_main.c$(ObjectSuffix): example/main.c $(IntermediateDirectory)/example_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/Surafel Assefa/Documents/Coding/Projects/SAL/example/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/example_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/example_main.c$(DependSuffix): example/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/example_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/example_main.c$(DependSuffix) -MM example/main.c

$(IntermediateDirectory)/example_main.c$(PreprocessSuffix): example/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/example_main.c$(PreprocessSuffix) example/main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r bin/obj/


