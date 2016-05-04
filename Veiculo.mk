##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Veiculo
ConfigurationName      :=Debug
WorkspacePath          := "C:\Users\Yan\Documents\Trabalho Final"
ProjectPath            := "C:\Users\Yan\Documents\Trabalho Final\Veiculo"
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=Yan
Date                   :=11/04/2016
CodeLitePath           :="C:\Program Files\CodeLite"
LinkerName             :=C:/TDM-GCC-64/bin/g++.exe
SharedObjectLinkerName :=C:/TDM-GCC-64/bin/g++.exe -shared -fPIC
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
ObjectsFileList        :="Veiculo.txt"
PCHCompileFlags        :=
MakeDirCommand         :=makedir
RcCmpOptions           := 
RcCompilerName         :=C:/TDM-GCC-64/bin/windres.exe
LinkOptions            :=  
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
AR       := C:/TDM-GCC-64/bin/ar.exe rcu
CXX      := C:/TDM-GCC-64/bin/g++.exe
CC       := C:/TDM-GCC-64/bin/gcc.exe
CXXFLAGS :=  -g -O0 -Wall $(Preprocessors)
CFLAGS   :=  -g -O0 -Wall $(Preprocessors)
ASFLAGS  := 
AS       := C:/TDM-GCC-64/bin/as.exe


##
## User defined environment variables
##
CodeLiteDir:=C:\Program Files\CodeLite
Objects0=$(IntermediateDirectory)/Veiculo_main.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo_Veiculo.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo_Terrestre.cpp$(ObjectSuffix) $(IntermediateDirectory)/Veiculo_Carro.cpp$(ObjectSuffix) 



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
$(IntermediateDirectory)/Veiculo_main.cpp$(ObjectSuffix): Veiculo/main.cpp $(IntermediateDirectory)/Veiculo_main.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Yan/Documents/Trabalho Final/Veiculo/Veiculo/main.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo_main.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo_main.cpp$(DependSuffix): Veiculo/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo_main.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo_main.cpp$(DependSuffix) -MM "Veiculo/main.cpp"

$(IntermediateDirectory)/Veiculo_main.cpp$(PreprocessSuffix): Veiculo/main.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo_main.cpp$(PreprocessSuffix) "Veiculo/main.cpp"

$(IntermediateDirectory)/Veiculo_Veiculo.cpp$(ObjectSuffix): Veiculo/Veiculo.cpp $(IntermediateDirectory)/Veiculo_Veiculo.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Yan/Documents/Trabalho Final/Veiculo/Veiculo/Veiculo.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo_Veiculo.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo_Veiculo.cpp$(DependSuffix): Veiculo/Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo_Veiculo.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo_Veiculo.cpp$(DependSuffix) -MM "Veiculo/Veiculo.cpp"

$(IntermediateDirectory)/Veiculo_Veiculo.cpp$(PreprocessSuffix): Veiculo/Veiculo.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo_Veiculo.cpp$(PreprocessSuffix) "Veiculo/Veiculo.cpp"

$(IntermediateDirectory)/Veiculo_Terrestre.cpp$(ObjectSuffix): Veiculo/Terrestre.cpp $(IntermediateDirectory)/Veiculo_Terrestre.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Yan/Documents/Trabalho Final/Veiculo/Veiculo/Terrestre.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo_Terrestre.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo_Terrestre.cpp$(DependSuffix): Veiculo/Terrestre.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo_Terrestre.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo_Terrestre.cpp$(DependSuffix) -MM "Veiculo/Terrestre.cpp"

$(IntermediateDirectory)/Veiculo_Terrestre.cpp$(PreprocessSuffix): Veiculo/Terrestre.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo_Terrestre.cpp$(PreprocessSuffix) "Veiculo/Terrestre.cpp"

$(IntermediateDirectory)/Veiculo_Carro.cpp$(ObjectSuffix): Veiculo/Carro.cpp $(IntermediateDirectory)/Veiculo_Carro.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "C:/Users/Yan/Documents/Trabalho Final/Veiculo/Veiculo/Carro.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/Veiculo_Carro.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/Veiculo_Carro.cpp$(DependSuffix): Veiculo/Carro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/Veiculo_Carro.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/Veiculo_Carro.cpp$(DependSuffix) -MM "Veiculo/Carro.cpp"

$(IntermediateDirectory)/Veiculo_Carro.cpp$(PreprocessSuffix): Veiculo/Carro.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/Veiculo_Carro.cpp$(PreprocessSuffix) "Veiculo/Carro.cpp"


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


