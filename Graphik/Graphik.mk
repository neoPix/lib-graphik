##
## Auto Generated makefile by CodeLite IDE
## any manual changes will be erased      
##
## Debug
ProjectName            :=Graphik
ConfigurationName      :=Debug
WorkspacePath          :=/home/david/projects/Graphik
ProjectPath            :=/home/david/projects/Graphik/Graphik
IntermediateDirectory  :=./Debug
OutDir                 := $(IntermediateDirectory)
CurrentFileName        :=
CurrentFilePath        :=
CurrentFileFullPath    :=
User                   :=David
Date                   :=30/11/16
CodeLitePath           :=/home/david/.codelite
LinkerName             :=/usr/bin/g++
SharedObjectLinkerName :=/usr/bin/g++ -shared -fPIC
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
OutputFile             :=$(IntermediateDirectory)/lib$(ProjectName).a
Preprocessors          :=$(PreprocessorSwitch)DEBUG 
ObjectSwitch           :=-o 
ArchiveOutputSwitch    := 
PreprocessOnlySwitch   :=-E
ObjectsFileList        :="Graphik.txt"
PCHCompileFlags        :=
MakeDirCommand         :=mkdir -p
LinkOptions            :=  -lGL -lGLEW -lSDL2
IncludePath            :=  $(IncludeSwitch). $(IncludeSwitch). $(IncludeSwitch)./include $(IncludeSwitch)/usr/include/ 
IncludePCH             := 
RcIncludePath          := 
Libs                   := 
ArLibs                 :=  
LibPath                := $(LibraryPathSwitch). 

##
## Common variables
## AR, CXX, CC, AS, CXXFLAGS and CFLAGS can be overriden using an environment variables
##
AR       := /usr/bin/ar rcu
CXX      := /usr/bin/g++
CC       := /usr/bin/gcc
CXXFLAGS :=  -g -std=c++11 $(Preprocessors)
CFLAGS   :=  -g $(Preprocessors)
ASFLAGS  := 
AS       := /usr/bin/as


##
## User defined environment variables
##
CodeLiteDir:=/usr/share/codelite
Objects0=$(IntermediateDirectory)/src_context.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_timemanager.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_memorycounter.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_states_state.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_states_statemanager.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_object_object.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_mesh_mesh.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix) 



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
	@$(MakeDirCommand) "/home/david/projects/Graphik/.build-debug"
	@echo rebuilt > "/home/david/projects/Graphik/.build-debug/Graphik"

MakeIntermediateDirs:
	@test -d ./Debug || $(MakeDirCommand) ./Debug


./Debug:
	@test -d ./Debug || $(MakeDirCommand) ./Debug

PreBuild:


##
## Objects
##
$(IntermediateDirectory)/src_context.cpp$(ObjectSuffix): src/context.cpp $(IntermediateDirectory)/src_context.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/context.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_context.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_context.cpp$(DependSuffix): src/context.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_context.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_context.cpp$(DependSuffix) -MM src/context.cpp

$(IntermediateDirectory)/src_context.cpp$(PreprocessSuffix): src/context.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_context.cpp$(PreprocessSuffix)src/context.cpp

$(IntermediateDirectory)/src_timemanager.cpp$(ObjectSuffix): src/timemanager.cpp $(IntermediateDirectory)/src_timemanager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/timemanager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_timemanager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_timemanager.cpp$(DependSuffix): src/timemanager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_timemanager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_timemanager.cpp$(DependSuffix) -MM src/timemanager.cpp

$(IntermediateDirectory)/src_timemanager.cpp$(PreprocessSuffix): src/timemanager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_timemanager.cpp$(PreprocessSuffix)src/timemanager.cpp

$(IntermediateDirectory)/src_memorycounter.cpp$(ObjectSuffix): src/memorycounter.cpp $(IntermediateDirectory)/src_memorycounter.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/memorycounter.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_memorycounter.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_memorycounter.cpp$(DependSuffix): src/memorycounter.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_memorycounter.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_memorycounter.cpp$(DependSuffix) -MM src/memorycounter.cpp

$(IntermediateDirectory)/src_memorycounter.cpp$(PreprocessSuffix): src/memorycounter.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_memorycounter.cpp$(PreprocessSuffix)src/memorycounter.cpp

$(IntermediateDirectory)/src_states_state.cpp$(ObjectSuffix): src/states/state.cpp $(IntermediateDirectory)/src_states_state.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/states/state.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_states_state.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_states_state.cpp$(DependSuffix): src/states/state.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_states_state.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_states_state.cpp$(DependSuffix) -MM src/states/state.cpp

$(IntermediateDirectory)/src_states_state.cpp$(PreprocessSuffix): src/states/state.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_states_state.cpp$(PreprocessSuffix)src/states/state.cpp

$(IntermediateDirectory)/src_states_statemanager.cpp$(ObjectSuffix): src/states/statemanager.cpp $(IntermediateDirectory)/src_states_statemanager.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/states/statemanager.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_states_statemanager.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_states_statemanager.cpp$(DependSuffix): src/states/statemanager.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_states_statemanager.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_states_statemanager.cpp$(DependSuffix) -MM src/states/statemanager.cpp

$(IntermediateDirectory)/src_states_statemanager.cpp$(PreprocessSuffix): src/states/statemanager.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_states_statemanager.cpp$(PreprocessSuffix)src/states/statemanager.cpp

$(IntermediateDirectory)/src_object_object.cpp$(ObjectSuffix): src/object/object.cpp $(IntermediateDirectory)/src_object_object.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/object/object.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_object_object.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_object_object.cpp$(DependSuffix): src/object/object.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_object_object.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_object_object.cpp$(DependSuffix) -MM src/object/object.cpp

$(IntermediateDirectory)/src_object_object.cpp$(PreprocessSuffix): src/object/object.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_object_object.cpp$(PreprocessSuffix)src/object/object.cpp

$(IntermediateDirectory)/src_mesh_mesh.cpp$(ObjectSuffix): src/mesh/mesh.cpp $(IntermediateDirectory)/src_mesh_mesh.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/mesh/mesh.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_mesh_mesh.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_mesh_mesh.cpp$(DependSuffix): src/mesh/mesh.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_mesh_mesh.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_mesh_mesh.cpp$(DependSuffix) -MM src/mesh/mesh.cpp

$(IntermediateDirectory)/src_mesh_mesh.cpp$(PreprocessSuffix): src/mesh/mesh.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_mesh_mesh.cpp$(PreprocessSuffix)src/mesh/mesh.cpp

$(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix): src/shader/shader.cpp $(IntermediateDirectory)/src_shader_shader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/shader/shader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_shader_shader.cpp$(DependSuffix): src/shader/shader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_shader_shader.cpp$(DependSuffix) -MM src/shader/shader.cpp

$(IntermediateDirectory)/src_shader_shader.cpp$(PreprocessSuffix): src/shader/shader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_shader_shader.cpp$(PreprocessSuffix)src/shader/shader.cpp


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


