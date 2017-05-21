##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Release
ProjectName            :=SAL_Test
ConfigurationName      :=Release
WorkspacePath          :=C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL
ProjectPath            :=C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL
IntermediateDirectory  :=test/obj/
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=surafel911
Date                   :=20/05/2017
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
OutputFile             :=test/$(ProjectName)
Preprocessors          :=$(PreprocessorSwitch)NDEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="SAL_Test.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/mingw64/bin/windres.exe
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
AR       := C:/mingw64/bin/ar.exe rcu
CXX      := C:/mingw64/bin/g++.exe
CC       := C:/mingw64/bin/gcc.exe
CXXFLAGS :=  -O3 -Wall $(Preprocessors)
CFLAGS   :=  -O3 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
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
	@$(MakeDirCommand) "test/obj/"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "test/obj/"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/test_main.c$(ObjectSuffix): test/main.c $(IntermediateDirectory)/test_main.c$(DependSuffix)
	$(CC) $(SourceSwitch) "C:/Users/surafel911/Documents/Coding/Projects/Libraries/SAL/test/main.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/test_main.c$(ObjectSuffix) $(IncludePath)
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


