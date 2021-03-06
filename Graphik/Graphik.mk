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
Date                   :=29/12/16
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
Objects0=$(IntermediateDirectory)/src_context.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_timemanager.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_memorycounter.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_states_state.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_states_statemanager.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_object_object.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_mesh_mesh.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_stream_textfile.cpp$(ObjectSuffix) \
	$(IntermediateDirectory)/src_texture_texture.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_texture_material.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_transform_transform.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_camera_camera.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(ObjectSuffix) $(IntermediateDirectory)/src_texture_loaders_stb_image.c$(ObjectSuffix) 



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

$(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(ObjectSuffix): src/mesh/indexedmodel.cpp $(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/mesh/indexedmodel.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(DependSuffix): src/mesh/indexedmodel.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(DependSuffix) -MM src/mesh/indexedmodel.cpp

$(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(PreprocessSuffix): src/mesh/indexedmodel.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_mesh_indexedmodel.cpp$(PreprocessSuffix)src/mesh/indexedmodel.cpp

$(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix): src/shader/shader.cpp $(IntermediateDirectory)/src_shader_shader.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/shader/shader.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_shader_shader.cpp$(DependSuffix): src/shader/shader.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_shader_shader.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_shader_shader.cpp$(DependSuffix) -MM src/shader/shader.cpp

$(IntermediateDirectory)/src_shader_shader.cpp$(PreprocessSuffix): src/shader/shader.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_shader_shader.cpp$(PreprocessSuffix)src/shader/shader.cpp

$(IntermediateDirectory)/src_stream_textfile.cpp$(ObjectSuffix): src/stream/textfile.cpp $(IntermediateDirectory)/src_stream_textfile.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/stream/textfile.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_stream_textfile.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_stream_textfile.cpp$(DependSuffix): src/stream/textfile.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_stream_textfile.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_stream_textfile.cpp$(DependSuffix) -MM src/stream/textfile.cpp

$(IntermediateDirectory)/src_stream_textfile.cpp$(PreprocessSuffix): src/stream/textfile.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_stream_textfile.cpp$(PreprocessSuffix)src/stream/textfile.cpp

$(IntermediateDirectory)/src_texture_texture.cpp$(ObjectSuffix): src/texture/texture.cpp $(IntermediateDirectory)/src_texture_texture.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/texture/texture.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_texture_texture.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_texture_texture.cpp$(DependSuffix): src/texture/texture.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_texture_texture.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_texture_texture.cpp$(DependSuffix) -MM src/texture/texture.cpp

$(IntermediateDirectory)/src_texture_texture.cpp$(PreprocessSuffix): src/texture/texture.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_texture_texture.cpp$(PreprocessSuffix)src/texture/texture.cpp

$(IntermediateDirectory)/src_texture_material.cpp$(ObjectSuffix): src/texture/material.cpp $(IntermediateDirectory)/src_texture_material.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/texture/material.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_texture_material.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_texture_material.cpp$(DependSuffix): src/texture/material.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_texture_material.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_texture_material.cpp$(DependSuffix) -MM src/texture/material.cpp

$(IntermediateDirectory)/src_texture_material.cpp$(PreprocessSuffix): src/texture/material.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_texture_material.cpp$(PreprocessSuffix)src/texture/material.cpp

$(IntermediateDirectory)/src_transform_transform.cpp$(ObjectSuffix): src/transform/transform.cpp $(IntermediateDirectory)/src_transform_transform.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/transform/transform.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_transform_transform.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_transform_transform.cpp$(DependSuffix): src/transform/transform.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_transform_transform.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_transform_transform.cpp$(DependSuffix) -MM src/transform/transform.cpp

$(IntermediateDirectory)/src_transform_transform.cpp$(PreprocessSuffix): src/transform/transform.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_transform_transform.cpp$(PreprocessSuffix)src/transform/transform.cpp

$(IntermediateDirectory)/src_camera_camera.cpp$(ObjectSuffix): src/camera/camera.cpp $(IntermediateDirectory)/src_camera_camera.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/camera/camera.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_camera_camera.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_camera_camera.cpp$(DependSuffix): src/camera/camera.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_camera_camera.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_camera_camera.cpp$(DependSuffix) -MM src/camera/camera.cpp

$(IntermediateDirectory)/src_camera_camera.cpp$(PreprocessSuffix): src/camera/camera.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_camera_camera.cpp$(PreprocessSuffix)src/camera/camera.cpp

$(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(ObjectSuffix): src/mesh/loaders/Loader_OBJ.cpp $(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(DependSuffix)
	$(CXX) $(IncludePCH) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/mesh/loaders/Loader_OBJ.cpp" $(CXXFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(DependSuffix): src/mesh/loaders/Loader_OBJ.cpp
	@$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(ObjectSuffix) -MF$(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(DependSuffix) -MM src/mesh/loaders/Loader_OBJ.cpp

$(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(PreprocessSuffix): src/mesh/loaders/Loader_OBJ.cpp
	$(CXX) $(CXXFLAGS) $(IncludePCH) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_mesh_loaders_Loader_OBJ.cpp$(PreprocessSuffix)src/mesh/loaders/Loader_OBJ.cpp

$(IntermediateDirectory)/src_texture_loaders_stb_image.c$(ObjectSuffix): src/texture/loaders/stb_image.c $(IntermediateDirectory)/src_texture_loaders_stb_image.c$(DependSuffix)
	$(CC) $(SourceSwitch) "/home/david/projects/Graphik/Graphik/src/texture/loaders/stb_image.c" $(CFLAGS) $(ObjectSwitch)$(IntermediateDirectory)/src_texture_loaders_stb_image.c$(ObjectSuffix) $(IncludePath)
$(IntermediateDirectory)/src_texture_loaders_stb_image.c$(DependSuffix): src/texture/loaders/stb_image.c
	@$(CC) $(CFLAGS) $(IncludePath) -MG -MP -MT$(IntermediateDirectory)/src_texture_loaders_stb_image.c$(ObjectSuffix) -MF$(IntermediateDirectory)/src_texture_loaders_stb_image.c$(DependSuffix) -MM src/texture/loaders/stb_image.c

$(IntermediateDirectory)/src_texture_loaders_stb_image.c$(PreprocessSuffix): src/texture/loaders/stb_image.c
	$(CC) $(CFLAGS) $(IncludePath) $(PreprocessOnlySwitch) $(OutputSwitch) $(IntermediateDirectory)/src_texture_loaders_stb_image.c$(PreprocessSuffix)src/texture/loaders/stb_image.c


-include $(IntermediateDirectory)/*$(DependSuffix)
##
## Clean
##
clean:
	$(RM) -r ./Debug/


