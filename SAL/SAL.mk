##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=SAL
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL_Workspace
ProjectPath            :=C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL
IntermediateDirectory  :=build/obj
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=surafel911
Date                   :=04/04/2017
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
OutputFile             :=build/debug/$(ProjectName)
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
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)code 
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
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/code_main.c$(ObjectSuffix) $(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(ObjectSuffix) $(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(ObjectSuffix) $(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(ObjectSuffix) $(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(ObjectSuffix) 



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
	@$(MakeDirCommand) "build/obj"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "build/obj"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/code_main.c$(ObjectSuffix): code/main.c $(IntermediateDirectory)/code_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL/code/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/code_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/code_main.c$(DependSuffix): code/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/code_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/code_main.c$(DependSuffix) -MM code/main.c

$(IntermediateDirectory)/code_main.c$(PreprocessSuffix): code/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/code_main.c$(PreprocessSuffix) code/main.c

$(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(ObjectSuffix): code/sal/sal_string/sal_string.c $(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL/code/sal/sal_string/sal_string.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(DependSuffix): code/sal/sal_string/sal_string.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(ObjectSuffix) -MF$(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(DependSuffix) -MM code/sal/sal_string/sal_string.c

$(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(PreprocessSuffix): code/sal/sal_string/sal_string.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/code_sal_sal_string_sal_string.c$(PreprocessSuffix) code/sal/sal_string/sal_string.c

$(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(ObjectSuffix): code/sal/sal_memory/sal_memory.c $(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL/code/sal/sal_memory/sal_memory.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(DependSuffix): code/sal/sal_memory/sal_memory.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(ObjectSuffix) -MF$(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(DependSuffix) -MM code/sal/sal_memory/sal_memory.c

$(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(PreprocessSuffix): code/sal/sal_memory/sal_memory.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/code_sal_sal_memory_sal_memory.c$(PreprocessSuffix) code/sal/sal_memory/sal_memory.c

$(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(ObjectSuffix): code/sal/sal_error/sal_error.c $(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL/code/sal/sal_error/sal_error.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(DependSuffix): code/sal/sal_error/sal_error.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(ObjectSuffix) -MF$(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(DependSuffix) -MM code/sal/sal_error/sal_error.c

$(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(PreprocessSuffix): code/sal/sal_error/sal_error.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/code_sal_sal_error_sal_error.c$(PreprocessSuffix) code/sal/sal_error/sal_error.c

$(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(ObjectSuffix): code/sal/sal_containers/sal_vector.c $(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/SAL/code/sal/sal_containers/sal_vector.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(DependSuffix): code/sal/sal_containers/sal_vector.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(ObjectSuffix) -MF$(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(DependSuffix) -MM code/sal/sal_containers/sal_vector.c

$(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(PreprocessSuffix): code/sal/sal_containers/sal_vector.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/code_sal_sal_containers_sal_vector.c$(PreprocessSuffix) code/sal/sal_containers/sal_vector.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r build/obj/


