##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=SAL_Test
ConfigurationName      :=Release
WorkspacePath          :=/home/surafel911/Documents/Coding/SAL
ProjectPath            :=/home/surafel911/Documents/Coding/SAL
IntermediateDirectory  :=test/obj/
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Surafel Assefa
Date                   :=06/11/17
CodeLitePath           :=/home/surafel911/.codelite
LinkerName             :=gcc
SharedObjectLinkerName :=gcc -shared -fPIC
ObjectSuffix           :=.o
DependSuffix           :=.o.d
PreprocessSuffix       :=.o.i
DebugSwitch            :=-g 
IncludeSwitch          :=-I
LibrarySwitch          :=-l
OutputSwitch           :=-o 
LibraryPathSwitch      :=-L
PreprocessorSwitch     :=-D
SourceSwitch           :=-c 
OutputFile             :=test/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E 
ObjectsFileList        :="SAL_Test.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch)include/ 
IncludePCH             := 
RcIncludePath          := 
Libs                   := $(LibrarySwitch)sal 
ArLibs                 :=  "sal" 
LibPath                := $(LibraryPathSwitch). $(LibraryPathSwitch)bin/ 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := ar rcus
CXX      := gcc
CC       := gcc
CXXFLAGS :=  -O3 -Wall $(Preprocessors)
CFLAGS   :=  -O3 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/test_main.c$(ObjectSuffix) 



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
	@test -d test/obj/ || $(MakeDirCommand) test/obj/


$(IntermediateDirectory)/.d:
	@test -d test/obj/ || $(MakeDirCommand) test/obj/

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/test_main.c$(ObjectSuffix): test/main.c $(IntermediateDirectory)/test_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/surafel911/Documents/Coding/SAL/test/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test_main.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/test_main.c$(DependSuffix): test/main.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/test_main.c$(ObjectSuffix) -MF$(IntermediateDirectory)/test_main.c$(DependSuffix) -MM test/main.c

$(IntermediateDirectory)/test_main.c$(PreprocessSuffix): test/main.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/test_main.c$(PreprocessSuffix) test/main.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r test/obj/


