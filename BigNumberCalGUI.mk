##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=BigNumberCalGUI
ConfigurationName      :=Debug
WorkspacePath          :=C:/Users/PohaoSu/Desktop/test
ProjectPath            :=C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=PohaoSu
Date                   :=11/04/2020
CodeLitePath           :=E:/CodeLite/CodeLite
LinkerName             :=E:/MinGW-w64-7.3.0/mingw64/bin/g++.exe
SharedObjectLinkerName :=E:/MinGW-w64-7.3.0/mingw64/bin/g++.exe -shared -fPIC
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
OutputFile             :=$(IntermediateDirectory)/$(ProjectName)
Preprocessors          :=
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="BigNumberCalGUI.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := $(shell wx-config --rcflags)
RcCompilerName         :=E:/MinGW-w64-7.3.0/mingw64/bin/windres.exe
LinkOptions            :=  $(shell wx-config --libs) -mwindows
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := E:/MinGW-w64-7.3.0/mingw64/bin/ar.exe rcu
CXX      := E:/MinGW-w64-7.3.0/mingw64/bin/g++.exe
CC       := E:/MinGW-w64-7.3.0/mingw64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(shell wx-config --cflags)  $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := E:/MinGW-w64-7.3.0/mingw64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=E:\CodeLite\CodeLite
WXWIN:=E:\wxWidgets-3.1.2
WXCFG:=gcc_dll/mswu
Objects0=$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(ObjectSuffix) $(IntermediateDirectory)/win_resources.rc$(ObjectSuffix) $(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "./Debug"


$(IntermediateDirectory)/.d:
	@$(MakeDirCommand) "./Debug"

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(ObjectSuffix): BigNumberCaculator/BigNumberCaculator.cpp $(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI/BigNumberCaculator/BigNumberCaculator.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(DependSuffix): BigNumberCaculator/BigNumberCaculator.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(DependSuffix) -MM BigNumberCaculator/BigNumberCaculator.cpp

$(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(PreprocessSuffix): BigNumberCaculator/BigNumberCaculator.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/BigNumberCaculator_BigNumberCaculator.cpp$(PreprocessSuffix) BigNumberCaculator/BigNumberCaculator.cpp

$(IntermediateDirectory)/win_resources.rc$(ObjectSuffix): win_resources.rc
	$(RcCompilerName) -i "C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI/win_resources.rc" $(RcCmpOptions)   $(ObjectSwitch)$(IntermediateDirectory)/win_resources.rc$(ObjectSuffix) $(RcIncludePath)
$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix): MainFrame.cpp $(IntermediateDirectory)/MainFrame.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI/MainFrame.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/MainFrame.cpp$(DependSuffix): MainFrame.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/MainFrame.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/MainFrame.cpp$(DependSuffix) -MM MainFrame.cpp

$(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix): MainFrame.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/MainFrame.cpp$(PreprocessSuffix) MainFrame.cpp

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix): wxcrafter_bitmaps.cpp $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI/wxcrafter_bitmaps.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix): wxcrafter_bitmaps.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(DependSuffix) -MM wxcrafter_bitmaps.cpp

$(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix): wxcrafter_bitmaps.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter_bitmaps.cpp$(PreprocessSuffix) wxcrafter_bitmaps.cpp

$(IntermediateDirectory)/main.cpp$(ObjectSuffix): main.cpp $(IntermediateDirectory)/main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/main.cpp$(DependSuffix): main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/main.cpp$(DependSuffix) -MM main.cpp

$(IntermediateDirectory)/main.cpp$(PreprocessSuffix): main.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/main.cpp$(PreprocessSuffix) main.cpp

$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix): wxcrafter.cpp $(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/PohaoSu/Desktop/test/BigNumberCalGUI/wxcrafter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix): wxcrafter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/wxcrafter.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/wxcrafter.cpp$(DependSuffix) -MM wxcrafter.cpp

$(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix): wxcrafter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/wxcrafter.cpp$(PreprocessSuffix) wxcrafter.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


