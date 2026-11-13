#include "bridge_core.hpp"
#include "special_interfaces.hpp"
namespace dfbridge {
static void returned_GDExtensionPtrBuiltInMethod(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrConstructor(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrDestructor(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrGetter(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrIndexedGetter(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrIndexedSetter(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrKeyedChecker(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrKeyedGetter(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrKeyedSetter(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrOperatorEvaluator(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrSetter(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrUtilityFunction(Arm64Ctx*, uint64_t);
static void returned_GDExtensionScriptInstancePropertyStateAdd(Arm64Ctx*, uint64_t);
static void returned_GDExtensionTypeFromVariantConstructorFunc(Arm64Ctx*, uint64_t);
static void returned_GDExtensionVariantFromTypeConstructorFunc(Arm64Ctx*, uint64_t);
static void returned_GDExtensionVariantGetInternalPtrFunc(Arm64Ctx*, uint64_t);
static void returned_GDExtensionPtrBuiltInMethod(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrBuiltInMethod>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<const GDExtensionConstTypePtr *>(context, 1), from_register<GDExtensionTypePtr>(context, 2), from_register<int32_t>(context, 3));
}
static void returned_GDExtensionPtrConstructor(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrConstructor>(target)(from_register<GDExtensionUninitializedTypePtr>(context, 0), from_register<const GDExtensionConstTypePtr *>(context, 1));
}
static void returned_GDExtensionPtrDestructor(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrDestructor>(target)(from_register<GDExtensionTypePtr>(context, 0));
}
static void returned_GDExtensionPtrGetter(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrGetter>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionTypePtr>(context, 1));
}
static void returned_GDExtensionPtrIndexedGetter(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrIndexedGetter>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1), from_register<GDExtensionTypePtr>(context, 2));
}
static void returned_GDExtensionPtrIndexedSetter(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrIndexedSetter>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1), from_register<GDExtensionConstTypePtr>(context, 2));
}
static void returned_GDExtensionPtrKeyedChecker(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionPtrKeyedChecker>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1));
  to_register(context, result);
}
static void returned_GDExtensionPtrKeyedGetter(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrKeyedGetter>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionConstTypePtr>(context, 1), from_register<GDExtensionTypePtr>(context, 2));
}
static void returned_GDExtensionPtrKeyedSetter(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrKeyedSetter>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionConstTypePtr>(context, 1), from_register<GDExtensionConstTypePtr>(context, 2));
}
static void returned_GDExtensionPtrOperatorEvaluator(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrOperatorEvaluator>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionConstTypePtr>(context, 1), from_register<GDExtensionTypePtr>(context, 2));
}
static void returned_GDExtensionPtrSetter(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrSetter>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionConstTypePtr>(context, 1));
}
static void returned_GDExtensionPtrUtilityFunction(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionPtrUtilityFunction>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<const GDExtensionConstTypePtr *>(context, 1), from_register<int32_t>(context, 2));
}
static void returned_GDExtensionScriptInstancePropertyStateAdd(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionScriptInstancePropertyStateAdd>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<void *>(context, 2));
}
static void returned_GDExtensionTypeFromVariantConstructorFunc(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionTypeFromVariantConstructorFunc>(target)(from_register<GDExtensionUninitializedTypePtr>(context, 0), from_register<GDExtensionVariantPtr>(context, 1));
}
static void returned_GDExtensionVariantFromTypeConstructorFunc(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionVariantFromTypeConstructorFunc>(target)(from_register<GDExtensionUninitializedVariantPtr>(context, 0), from_register<GDExtensionTypePtr>(context, 1));
}
static void returned_GDExtensionVariantGetInternalPtrFunc(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionVariantGetInternalPtrFunc>(target)(from_register<GDExtensionVariantPtr>(context, 0));
  to_register(context, result);
}
void register_callback_GDExtensionScriptInstancePropertyStateAdd(GDExtensionScriptInstancePropertyStateAdd callback) { if (callback) register_native(bits(callback), returned_GDExtensionScriptInstancePropertyStateAdd, "GDExtensionScriptInstancePropertyStateAdd"); }
static void interface_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_array_set_typed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceArraySetTyped>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionVariantType>(context, 1), from_register<GDExtensionConstStringNamePtr>(context, 2), from_register<GDExtensionConstVariantPtr>(context, 3));
}
static void interface_callable_custom_create2(Arm64Ctx* context,uint64_t target) {
  special::callable_custom_create2(from_bits<GDExtensionInterfaceCallableCustomCreate2>(target), from_register<GDExtensionUninitializedTypePtr>(context, 0), from_register<GDExtensionCallableCustomInfo2 *>(context, 1));
}
static void interface_callable_custom_get_userdata(Arm64Ctx* context,uint64_t target) {
  auto result = special::callable_custom_get_userdata(from_bits<GDExtensionInterfaceCallableCustomGetUserData>(target), from_register<GDExtensionConstTypePtr>(context, 0), from_register<void *>(context, 1));
  to_register(context, result);
}
static void interface_classdb_construct_object2(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceClassdbConstructObject2>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0));
  to_register(context, result);
}
static void interface_classdb_get_class_tag(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceClassdbGetClassTag>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0));
  to_register(context, result);
}
static void interface_classdb_get_method_bind(Arm64Ctx* context,uint64_t target) {
  auto result = special::classdb_get_method_bind(from_bits<GDExtensionInterfaceClassdbGetMethodBind>(target), from_register<GDExtensionConstStringNamePtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_classdb_register_extension_class5(Arm64Ctx* context,uint64_t target) {
  special::classdb_register_extension_class5(from_bits<GDExtensionInterfaceClassdbRegisterExtensionClass5>(target), from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionConstStringNamePtr>(context, 2), from_register<const GDExtensionClassCreationInfo5 *>(context, 3));
}
static void interface_classdb_register_extension_class_integer_constant(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassIntegerConstant>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionConstStringNamePtr>(context, 2), from_register<GDExtensionConstStringNamePtr>(context, 3), from_register<GDExtensionInt>(context, 4), from_register<GDExtensionBool>(context, 5));
}
static void interface_classdb_register_extension_class_method(Arm64Ctx* context,uint64_t target) {
  special::classdb_register_extension_class_method(from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassMethod>(target), from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionClassMethodInfo *>(context, 2));
}
static void interface_classdb_register_extension_class_property(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassProperty>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionPropertyInfo *>(context, 2), from_register<GDExtensionConstStringNamePtr>(context, 3), from_register<GDExtensionConstStringNamePtr>(context, 4));
}
static void interface_classdb_register_extension_class_property_group(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassPropertyGroup>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionConstStringPtr>(context, 2), from_register<GDExtensionConstStringPtr>(context, 3));
}
static void interface_classdb_register_extension_class_property_indexed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassPropertyIndexed>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionPropertyInfo *>(context, 2), from_register<GDExtensionConstStringNamePtr>(context, 3), from_register<GDExtensionConstStringNamePtr>(context, 4), from_register<GDExtensionInt>(context, 5));
}
static void interface_classdb_register_extension_class_property_subgroup(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassPropertySubgroup>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionConstStringPtr>(context, 2), from_register<GDExtensionConstStringPtr>(context, 3));
}
static void interface_classdb_register_extension_class_signal(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassSignal>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionConstStringNamePtr>(context, 2), from_register<const GDExtensionPropertyInfo *>(context, 3), from_register<GDExtensionInt>(context, 4));
}
static void interface_classdb_register_extension_class_virtual_method(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbRegisterExtensionClassVirtualMethod>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionClassVirtualMethodInfo *>(context, 2));
}
static void interface_classdb_unregister_extension_class(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceClassdbUnregisterExtensionClass>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1));
}
static void interface_dictionary_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceDictionaryOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1));
  to_register(context, result);
}
static void interface_dictionary_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceDictionaryOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1));
  to_register(context, result);
}
static void interface_dictionary_set_typed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceDictionarySetTyped>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionVariantType>(context, 1), from_register<GDExtensionConstStringNamePtr>(context, 2), from_register<GDExtensionConstVariantPtr>(context, 3), from_register<GDExtensionVariantType>(context, 4), from_register<GDExtensionConstStringNamePtr>(context, 5), from_register<GDExtensionConstVariantPtr>(context, 6));
}
static void interface_editor_add_plugin(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceEditorAddPlugin>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0));
}
static void interface_editor_help_load_xml_from_utf8_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionsInterfaceEditorHelpLoadXmlFromUtf8Chars>(target)(from_register<const char *>(context, 0));
}
static void interface_editor_help_load_xml_from_utf8_chars_and_len(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionsInterfaceEditorHelpLoadXmlFromUtf8CharsAndLen>(target)(from_register<const char *>(context, 0), from_register<GDExtensionInt>(context, 1));
}
static void interface_editor_register_get_classes_used_callback(Arm64Ctx* context,uint64_t target) {
  special::editor_register_get_classes_used_callback(from_bits<GDExtensionInterfaceEditorRegisterGetClassesUsedCallback>(target), from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionEditorGetClassesUsedCallback>(context, 1));
}
static void interface_editor_remove_plugin(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceEditorRemovePlugin>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0));
}
static void interface_file_access_get_buffer(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceFileAccessGetBuffer>(target)(from_register<GDExtensionConstObjectPtr>(context, 0), from_register<uint8_t *>(context, 1), from_register<uint64_t>(context, 2));
  to_register(context, result);
}
static void interface_file_access_store_buffer(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceFileAccessStoreBuffer>(target)(from_register<GDExtensionObjectPtr>(context, 0), from_register<const uint8_t *>(context, 1), from_register<uint64_t>(context, 2));
}
static void interface_get_godot_version2(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceGetGodotVersion2>(target)(from_register<GDExtensionGodotVersion2 *>(context, 0));
}
static void interface_get_library_path(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceGetLibraryPath>(target)(from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<GDExtensionUninitializedStringPtr>(context, 1));
}
static void interface_get_native_struct_size(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceGetNativeStructSize>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0));
  to_register(context, result);
}
static void interface_get_variant_from_type_constructor(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceGetVariantFromTypeConstructor>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionVariantFromTypeConstructorFunc, "GDExtensionVariantFromTypeConstructorFunc");
  to_register(context, result);
}
static void interface_get_variant_to_type_constructor(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceGetVariantToTypeConstructor>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionTypeFromVariantConstructorFunc, "GDExtensionTypeFromVariantConstructorFunc");
  to_register(context, result);
}
static void interface_global_get_singleton(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceGlobalGetSingleton>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0));
  to_register(context, result);
}
static void interface_image_ptr(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceImagePtr>(target)(from_register<GDExtensionObjectPtr>(context, 0));
  to_register(context, result);
}
static void interface_image_ptrw(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceImagePtrw>(target)(from_register<GDExtensionObjectPtr>(context, 0));
  to_register(context, result);
}
static void interface_mem_alloc(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceMemAlloc>(target)(from_register<size_t>(context, 0));
  to_register(context, result);
}
static void interface_mem_free(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceMemFree>(target)(from_register<void *>(context, 0));
}
static void interface_mem_realloc(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceMemRealloc>(target)(from_register<void *>(context, 0), from_register<size_t>(context, 1));
  to_register(context, result);
}
static void interface_object_call_script_method(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceObjectCallScriptMethod>(target)(from_register<GDExtensionObjectPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionConstVariantPtr *>(context, 2), from_register<GDExtensionInt>(context, 3), from_register<GDExtensionUninitializedVariantPtr>(context, 4), from_register<GDExtensionCallError *>(context, 5));
}
static void interface_object_cast_to(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceObjectCastTo>(target)(from_register<GDExtensionConstObjectPtr>(context, 0), from_register<void *>(context, 1));
  to_register(context, result);
}
static void interface_object_destroy(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceObjectDestroy>(target)(from_register<GDExtensionObjectPtr>(context, 0));
}
static void interface_object_free_instance_binding(Arm64Ctx* context,uint64_t target) {
  special::object_free_instance_binding(from_bits<GDExtensionInterfaceObjectFreeInstanceBinding>(target), from_register<GDExtensionObjectPtr>(context, 0), from_register<void *>(context, 1));
}
static void interface_object_get_class_name(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceObjectGetClassName>(target)(from_register<GDExtensionConstObjectPtr>(context, 0), from_register<GDExtensionClassLibraryPtr>(context, 1), from_register<GDExtensionUninitializedStringNamePtr>(context, 2));
  to_register(context, result);
}
static void interface_object_get_instance_binding(Arm64Ctx* context,uint64_t target) {
  auto result = special::object_get_instance_binding(from_bits<GDExtensionInterfaceObjectGetInstanceBinding>(target), from_register<GDExtensionObjectPtr>(context, 0), from_register<void *>(context, 1), from_register<const GDExtensionInstanceBindingCallbacks *>(context, 2));
  to_register(context, result);
}
static void interface_object_get_instance_from_id(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceObjectGetInstanceFromId>(target)(from_register<GDObjectInstanceID>(context, 0));
  to_register(context, result);
}
static void interface_object_get_instance_id(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceObjectGetInstanceId>(target)(from_register<GDExtensionConstObjectPtr>(context, 0));
  to_register(context, result);
}
static void interface_object_get_script_instance(Arm64Ctx* context,uint64_t target) {
  auto result = special::object_get_script_instance(from_bits<GDExtensionInterfaceObjectGetScriptInstance>(target), from_register<GDExtensionConstObjectPtr>(context, 0), from_register<GDExtensionObjectPtr>(context, 1));
  to_register(context, result);
}
static void interface_object_has_script_method(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceObjectHasScriptMethod>(target)(from_register<GDExtensionConstObjectPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1));
  to_register(context, result);
}
static void interface_object_method_bind_call(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceObjectMethodBindCall>(target)(from_register<GDExtensionMethodBindPtr>(context, 0), from_register<GDExtensionObjectPtr>(context, 1), from_register<const GDExtensionConstVariantPtr *>(context, 2), from_register<GDExtensionInt>(context, 3), from_register<GDExtensionUninitializedVariantPtr>(context, 4), from_register<GDExtensionCallError *>(context, 5));
}
static void interface_object_method_bind_ptrcall(Arm64Ctx* context,uint64_t target) {
  special::object_method_bind_ptrcall(from_bits<GDExtensionInterfaceObjectMethodBindPtrcall>(target), context, from_register<GDExtensionMethodBindPtr>(context, 0), from_register<GDExtensionObjectPtr>(context, 1), from_register<const GDExtensionConstTypePtr *>(context, 2), from_register<GDExtensionTypePtr>(context, 3));
}
static void interface_object_set_instance(Arm64Ctx* context,uint64_t target) {
  special::object_set_instance(from_bits<GDExtensionInterfaceObjectSetInstance>(target), from_register<GDExtensionObjectPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionClassInstancePtr>(context, 2));
}
static void interface_object_set_instance_binding(Arm64Ctx* context,uint64_t target) {
  special::object_set_instance_binding(from_bits<GDExtensionInterfaceObjectSetInstanceBinding>(target), from_register<GDExtensionObjectPtr>(context, 0), from_register<void *>(context, 1), from_register<void *>(context, 2), from_register<const GDExtensionInstanceBindingCallbacks *>(context, 3));
}
static void interface_object_set_script_instance(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceObjectSetScriptInstance>(target)(from_register<GDExtensionObjectPtr>(context, 0), from_register<GDExtensionScriptInstanceDataPtr>(context, 1));
}
static void interface_packed_byte_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedByteArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_byte_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedByteArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_color_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedColorArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_color_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedColorArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_float32_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedFloat32ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_float32_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedFloat32ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_float64_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedFloat64ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_float64_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedFloat64ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_int32_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedInt32ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_int32_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedInt32ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_int64_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedInt64ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_int64_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedInt64ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_string_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedStringArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_string_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedStringArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_vector2_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedVector2ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_vector2_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedVector2ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_vector3_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedVector3ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_vector3_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedVector3ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_vector4_array_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedVector4ArrayOperatorIndex>(target)(from_register<GDExtensionTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_packed_vector4_array_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePackedVector4ArrayOperatorIndexConst>(target)(from_register<GDExtensionConstTypePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_placeholder_script_instance_create(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfacePlaceHolderScriptInstanceCreate>(target)(from_register<GDExtensionObjectPtr>(context, 0), from_register<GDExtensionObjectPtr>(context, 1), from_register<GDExtensionObjectPtr>(context, 2));
  to_register(context, result);
}
static void interface_placeholder_script_instance_update(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePlaceHolderScriptInstanceUpdate>(target)(from_register<GDExtensionScriptInstancePtr>(context, 0), from_register<GDExtensionConstTypePtr>(context, 1), from_register<GDExtensionConstTypePtr>(context, 2));
}
static void interface_print_error(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePrintError>(target)(from_register<const char *>(context, 0), from_register<const char *>(context, 1), from_register<const char *>(context, 2), from_register<int32_t>(context, 3), from_register<GDExtensionBool>(context, 4));
}
static void interface_print_error_with_message(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePrintErrorWithMessage>(target)(from_register<const char *>(context, 0), from_register<const char *>(context, 1), from_register<const char *>(context, 2), from_register<const char *>(context, 3), from_register<int32_t>(context, 4), from_register<GDExtensionBool>(context, 5));
}
static void interface_print_script_error(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePrintScriptError>(target)(from_register<const char *>(context, 0), from_register<const char *>(context, 1), from_register<const char *>(context, 2), from_register<int32_t>(context, 3), from_register<GDExtensionBool>(context, 4));
}
static void interface_print_script_error_with_message(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePrintScriptErrorWithMessage>(target)(from_register<const char *>(context, 0), from_register<const char *>(context, 1), from_register<const char *>(context, 2), from_register<const char *>(context, 3), from_register<int32_t>(context, 4), from_register<GDExtensionBool>(context, 5));
}
static void interface_print_warning(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePrintWarning>(target)(from_register<const char *>(context, 0), from_register<const char *>(context, 1), from_register<const char *>(context, 2), from_register<int32_t>(context, 3), from_register<GDExtensionBool>(context, 4));
}
static void interface_print_warning_with_message(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfacePrintWarningWithMessage>(target)(from_register<const char *>(context, 0), from_register<const char *>(context, 1), from_register<const char *>(context, 2), from_register<const char *>(context, 3), from_register<int32_t>(context, 4), from_register<GDExtensionBool>(context, 5));
}
static void interface_ref_get_object(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceRefGetObject>(target)(from_register<GDExtensionConstRefPtr>(context, 0));
  to_register(context, result);
}
static void interface_ref_set_object(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceRefSetObject>(target)(from_register<GDExtensionRefPtr>(context, 0), from_register<GDExtensionObjectPtr>(context, 1));
}
static void interface_register_main_loop_callbacks(Arm64Ctx* context,uint64_t target) {
  special::register_main_loop_callbacks(from_bits<GDExtensionInterfaceRegisterMainLoopCallbacks>(target), from_register<GDExtensionClassLibraryPtr>(context, 0), from_register<const GDExtensionMainLoopCallbacks *>(context, 1));
}
static void interface_script_instance_create3(Arm64Ctx* context,uint64_t target) {
  auto result = special::script_instance_create3(from_bits<GDExtensionInterfaceScriptInstanceCreate3>(target), from_register<const GDExtensionScriptInstanceInfo3 *>(context, 0), from_register<GDExtensionScriptInstanceDataPtr>(context, 1));
  to_register(context, result);
}
static void interface_string_name_new_with_latin1_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNameNewWithLatin1Chars>(target)(from_register<GDExtensionUninitializedStringNamePtr>(context, 0), from_register<const char *>(context, 1), from_register<GDExtensionBool>(context, 2));
}
static void interface_string_name_new_with_utf8_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNameNewWithUtf8Chars>(target)(from_register<GDExtensionUninitializedStringNamePtr>(context, 0), from_register<const char *>(context, 1));
}
static void interface_string_new_with_latin1_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithLatin1Chars>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char *>(context, 1));
}
static void interface_string_new_with_latin1_chars_and_len(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithLatin1CharsAndLen>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char *>(context, 1), from_register<GDExtensionInt>(context, 2));
}
static void interface_string_new_with_utf16_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithUtf16Chars>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char16_t *>(context, 1));
}
static void interface_string_new_with_utf16_chars_and_len(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithUtf16CharsAndLen>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char16_t *>(context, 1), from_register<GDExtensionInt>(context, 2));
}
static void interface_string_new_with_utf16_chars_and_len2(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringNewWithUtf16CharsAndLen2>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char16_t *>(context, 1), from_register<GDExtensionInt>(context, 2), from_register<GDExtensionBool>(context, 3));
  to_register(context, result);
}
static void interface_string_new_with_utf32_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithUtf32Chars>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char32_t *>(context, 1));
}
static void interface_string_new_with_utf32_chars_and_len(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithUtf32CharsAndLen>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char32_t *>(context, 1), from_register<GDExtensionInt>(context, 2));
}
static void interface_string_new_with_utf8_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithUtf8Chars>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char *>(context, 1));
}
static void interface_string_new_with_utf8_chars_and_len(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithUtf8CharsAndLen>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char *>(context, 1), from_register<GDExtensionInt>(context, 2));
}
static void interface_string_new_with_utf8_chars_and_len2(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringNewWithUtf8CharsAndLen2>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const char *>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_string_new_with_wide_chars(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithWideChars>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const wchar_t *>(context, 1));
}
static void interface_string_new_with_wide_chars_and_len(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringNewWithWideCharsAndLen>(target)(from_register<GDExtensionUninitializedStringPtr>(context, 0), from_register<const wchar_t *>(context, 1), from_register<GDExtensionInt>(context, 2));
}
static void interface_string_operator_index(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringOperatorIndex>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_string_operator_index_const(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringOperatorIndexConst>(target)(from_register<GDExtensionConstStringPtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_string_operator_plus_eq_c32str(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringOperatorPlusEqC32str>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<const char32_t *>(context, 1));
}
static void interface_string_operator_plus_eq_char(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringOperatorPlusEqChar>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<char32_t>(context, 1));
}
static void interface_string_operator_plus_eq_cstr(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringOperatorPlusEqCstr>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<const char *>(context, 1));
}
static void interface_string_operator_plus_eq_string(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringOperatorPlusEqString>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<GDExtensionConstStringPtr>(context, 1));
}
static void interface_string_operator_plus_eq_wcstr(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceStringOperatorPlusEqWcstr>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<const wchar_t *>(context, 1));
}
static void interface_string_resize(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringResize>(target)(from_register<GDExtensionStringPtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_string_to_latin1_chars(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringToLatin1Chars>(target)(from_register<GDExtensionConstStringPtr>(context, 0), from_register<char *>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_string_to_utf16_chars(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringToUtf16Chars>(target)(from_register<GDExtensionConstStringPtr>(context, 0), from_register<char16_t *>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_string_to_utf32_chars(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringToUtf32Chars>(target)(from_register<GDExtensionConstStringPtr>(context, 0), from_register<char32_t *>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_string_to_utf8_chars(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringToUtf8Chars>(target)(from_register<GDExtensionConstStringPtr>(context, 0), from_register<char *>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_string_to_wide_chars(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceStringToWideChars>(target)(from_register<GDExtensionConstStringPtr>(context, 0), from_register<wchar_t *>(context, 1), from_register<GDExtensionInt>(context, 2));
  to_register(context, result);
}
static void interface_variant_booleanize(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantBooleanize>(target)(from_register<GDExtensionConstVariantPtr>(context, 0));
  to_register(context, result);
}
static void interface_variant_call(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantCall>(target)(from_register<GDExtensionVariantPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionConstVariantPtr *>(context, 2), from_register<GDExtensionInt>(context, 3), from_register<GDExtensionUninitializedVariantPtr>(context, 4), from_register<GDExtensionCallError *>(context, 5));
}
static void interface_variant_call_static(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantCallStatic>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<const GDExtensionConstVariantPtr *>(context, 2), from_register<GDExtensionInt>(context, 3), from_register<GDExtensionUninitializedVariantPtr>(context, 4), from_register<GDExtensionCallError *>(context, 5));
}
static void interface_variant_can_convert(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantCanConvert>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionVariantType>(context, 1));
  to_register(context, result);
}
static void interface_variant_can_convert_strict(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantCanConvertStrict>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionVariantType>(context, 1));
  to_register(context, result);
}
static void interface_variant_construct(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantConstruct>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionUninitializedVariantPtr>(context, 1), from_register<const GDExtensionConstVariantPtr *>(context, 2), from_register<int32_t>(context, 3), from_register<GDExtensionCallError *>(context, 4));
}
static void interface_variant_destroy(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantDestroy>(target)(from_register<GDExtensionVariantPtr>(context, 0));
}
static void interface_variant_duplicate(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantDuplicate>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionVariantPtr>(context, 1), from_register<GDExtensionBool>(context, 2));
}
static void interface_variant_evaluate(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantEvaluate>(target)(from_register<GDExtensionVariantOperator>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<GDExtensionConstVariantPtr>(context, 2), from_register<GDExtensionUninitializedVariantPtr>(context, 3), from_register<GDExtensionBool *>(context, 4));
}
static void interface_variant_get(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantGet>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<GDExtensionUninitializedVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_get_constant_value(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantGetConstantValue>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionUninitializedVariantPtr>(context, 2));
}
static void interface_variant_get_indexed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantGetIndexed>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionInt>(context, 1), from_register<GDExtensionUninitializedVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3), from_register<GDExtensionBool *>(context, 4));
}
static void interface_variant_get_keyed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantGetKeyed>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<GDExtensionUninitializedVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_get_named(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantGetNamed>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionUninitializedVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_get_object_instance_id(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetObjectInstanceId>(target)(from_register<GDExtensionConstVariantPtr>(context, 0));
  to_register(context, result);
}
static void interface_variant_get_ptr_builtin_method(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrBuiltinMethod>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionInt>(context, 2));
  if (result) register_native(bits(result), returned_GDExtensionPtrBuiltInMethod, "GDExtensionPtrBuiltInMethod");
  to_register(context, result);
}
static void interface_variant_get_ptr_constructor(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrConstructor>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<int32_t>(context, 1));
  if (result) register_native(bits(result), returned_GDExtensionPtrConstructor, "GDExtensionPtrConstructor");
  to_register(context, result);
}
static void interface_variant_get_ptr_destructor(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrDestructor>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionPtrDestructor, "GDExtensionPtrDestructor");
  to_register(context, result);
}
static void interface_variant_get_ptr_getter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrGetter>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1));
  if (result) register_native(bits(result), returned_GDExtensionPtrGetter, "GDExtensionPtrGetter");
  to_register(context, result);
}
static void interface_variant_get_ptr_indexed_getter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrIndexedGetter>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionPtrIndexedGetter, "GDExtensionPtrIndexedGetter");
  to_register(context, result);
}
static void interface_variant_get_ptr_indexed_setter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrIndexedSetter>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionPtrIndexedSetter, "GDExtensionPtrIndexedSetter");
  to_register(context, result);
}
static void interface_variant_get_ptr_internal_getter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceGetVariantGetInternalPtrFunc>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionVariantGetInternalPtrFunc, "GDExtensionVariantGetInternalPtrFunc");
  to_register(context, result);
}
static void interface_variant_get_ptr_keyed_checker(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrKeyedChecker>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionPtrKeyedChecker, "GDExtensionPtrKeyedChecker");
  to_register(context, result);
}
static void interface_variant_get_ptr_keyed_getter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrKeyedGetter>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionPtrKeyedGetter, "GDExtensionPtrKeyedGetter");
  to_register(context, result);
}
static void interface_variant_get_ptr_keyed_setter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrKeyedSetter>(target)(from_register<GDExtensionVariantType>(context, 0));
  if (result) register_native(bits(result), returned_GDExtensionPtrKeyedSetter, "GDExtensionPtrKeyedSetter");
  to_register(context, result);
}
static void interface_variant_get_ptr_operator_evaluator(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrOperatorEvaluator>(target)(from_register<GDExtensionVariantOperator>(context, 0), from_register<GDExtensionVariantType>(context, 1), from_register<GDExtensionVariantType>(context, 2));
  if (result) register_native(bits(result), returned_GDExtensionPtrOperatorEvaluator, "GDExtensionPtrOperatorEvaluator");
  to_register(context, result);
}
static void interface_variant_get_ptr_setter(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrSetter>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1));
  if (result) register_native(bits(result), returned_GDExtensionPtrSetter, "GDExtensionPtrSetter");
  to_register(context, result);
}
static void interface_variant_get_ptr_utility_function(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetPtrUtilityFunction>(target)(from_register<GDExtensionConstStringNamePtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  if (result) register_native(bits(result), returned_GDExtensionPtrUtilityFunction, "GDExtensionPtrUtilityFunction");
  to_register(context, result);
}
static void interface_variant_get_type(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantGetType>(target)(from_register<GDExtensionConstVariantPtr>(context, 0));
  to_register(context, result);
}
static void interface_variant_get_type_name(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantGetTypeName>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionUninitializedStringPtr>(context, 1));
}
static void interface_variant_has_key(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantHasKey>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<GDExtensionBool *>(context, 2));
  to_register(context, result);
}
static void interface_variant_has_member(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantHasMember>(target)(from_register<GDExtensionVariantType>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1));
  to_register(context, result);
}
static void interface_variant_has_method(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantHasMethod>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1));
  to_register(context, result);
}
static void interface_variant_hash(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantHash>(target)(from_register<GDExtensionConstVariantPtr>(context, 0));
  to_register(context, result);
}
static void interface_variant_hash_compare(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantHashCompare>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1));
  to_register(context, result);
}
static void interface_variant_iter_get(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantIterGet>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionVariantPtr>(context, 1), from_register<GDExtensionUninitializedVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_iter_init(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantIterInit>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionUninitializedVariantPtr>(context, 1), from_register<GDExtensionBool *>(context, 2));
  to_register(context, result);
}
static void interface_variant_iter_next(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantIterNext>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionVariantPtr>(context, 1), from_register<GDExtensionBool *>(context, 2));
  to_register(context, result);
}
static void interface_variant_new_copy(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantNewCopy>(target)(from_register<GDExtensionUninitializedVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1));
}
static void interface_variant_new_nil(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantNewNil>(target)(from_register<GDExtensionUninitializedVariantPtr>(context, 0));
}
static void interface_variant_recursive_hash(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceVariantRecursiveHash>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionInt>(context, 1));
  to_register(context, result);
}
static void interface_variant_set(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantSet>(target)(from_register<GDExtensionVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<GDExtensionConstVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_set_indexed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantSetIndexed>(target)(from_register<GDExtensionVariantPtr>(context, 0), from_register<GDExtensionInt>(context, 1), from_register<GDExtensionConstVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3), from_register<GDExtensionBool *>(context, 4));
}
static void interface_variant_set_keyed(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantSetKeyed>(target)(from_register<GDExtensionVariantPtr>(context, 0), from_register<GDExtensionConstVariantPtr>(context, 1), from_register<GDExtensionConstVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_set_named(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantSetNamed>(target)(from_register<GDExtensionVariantPtr>(context, 0), from_register<GDExtensionConstStringNamePtr>(context, 1), from_register<GDExtensionConstVariantPtr>(context, 2), from_register<GDExtensionBool *>(context, 3));
}
static void interface_variant_stringify(Arm64Ctx* context,uint64_t target) {
  from_bits<GDExtensionInterfaceVariantStringify>(target)(from_register<GDExtensionConstVariantPtr>(context, 0), from_register<GDExtensionStringPtr>(context, 1));
}
static void interface_worker_thread_pool_add_native_group_task(Arm64Ctx* context,uint64_t target) {
  auto result = special::worker_thread_pool_add_native_group_task(from_bits<GDExtensionInterfaceWorkerThreadPoolAddNativeGroupTask>(target), from_register<GDExtensionObjectPtr>(context, 0), from_register<GDExtensionWorkerThreadPoolGroupTask>(context, 1), from_register<void *>(context, 2), from_register<int32_t>(context, 3), from_register<int32_t>(context, 4), from_register<GDExtensionBool>(context, 5), from_register<GDExtensionConstStringPtr>(context, 6));
  to_register(context, result);
}
static void interface_worker_thread_pool_add_native_task(Arm64Ctx* context,uint64_t target) {
  auto result = special::worker_thread_pool_add_native_task(from_bits<GDExtensionInterfaceWorkerThreadPoolAddNativeTask>(target), from_register<GDExtensionObjectPtr>(context, 0), from_register<GDExtensionWorkerThreadPoolTask>(context, 1), from_register<void *>(context, 2), from_register<GDExtensionBool>(context, 3), from_register<GDExtensionConstStringPtr>(context, 4));
  to_register(context, result);
}
static void interface_xml_parser_open_buffer(Arm64Ctx* context,uint64_t target) {
  auto result = from_bits<GDExtensionInterfaceXmlParserOpenBuffer>(target)(from_register<GDExtensionObjectPtr>(context, 0), from_register<const uint8_t *>(context, 1), from_register<size_t>(context, 2));
  to_register(context, result);
}
const InterfaceHandler generated_interfaces[] = {
  {"array_operator_index", interface_array_operator_index},
  {"array_operator_index_const", interface_array_operator_index_const},
  {"array_set_typed", interface_array_set_typed},
  {"callable_custom_create2", interface_callable_custom_create2},
  {"callable_custom_get_userdata", interface_callable_custom_get_userdata},
  {"classdb_construct_object2", interface_classdb_construct_object2},
  {"classdb_get_class_tag", interface_classdb_get_class_tag},
  {"classdb_get_method_bind", interface_classdb_get_method_bind},
  {"classdb_register_extension_class5", interface_classdb_register_extension_class5},
  {"classdb_register_extension_class_integer_constant", interface_classdb_register_extension_class_integer_constant},
  {"classdb_register_extension_class_method", interface_classdb_register_extension_class_method},
  {"classdb_register_extension_class_property", interface_classdb_register_extension_class_property},
  {"classdb_register_extension_class_property_group", interface_classdb_register_extension_class_property_group},
  {"classdb_register_extension_class_property_indexed", interface_classdb_register_extension_class_property_indexed},
  {"classdb_register_extension_class_property_subgroup", interface_classdb_register_extension_class_property_subgroup},
  {"classdb_register_extension_class_signal", interface_classdb_register_extension_class_signal},
  {"classdb_register_extension_class_virtual_method", interface_classdb_register_extension_class_virtual_method},
  {"classdb_unregister_extension_class", interface_classdb_unregister_extension_class},
  {"dictionary_operator_index", interface_dictionary_operator_index},
  {"dictionary_operator_index_const", interface_dictionary_operator_index_const},
  {"dictionary_set_typed", interface_dictionary_set_typed},
  {"editor_add_plugin", interface_editor_add_plugin},
  {"editor_help_load_xml_from_utf8_chars", interface_editor_help_load_xml_from_utf8_chars},
  {"editor_help_load_xml_from_utf8_chars_and_len", interface_editor_help_load_xml_from_utf8_chars_and_len},
  {"editor_register_get_classes_used_callback", interface_editor_register_get_classes_used_callback},
  {"editor_remove_plugin", interface_editor_remove_plugin},
  {"file_access_get_buffer", interface_file_access_get_buffer},
  {"file_access_store_buffer", interface_file_access_store_buffer},
  {"get_godot_version2", interface_get_godot_version2},
  {"get_library_path", interface_get_library_path},
  {"get_native_struct_size", interface_get_native_struct_size},
  {"get_variant_from_type_constructor", interface_get_variant_from_type_constructor},
  {"get_variant_to_type_constructor", interface_get_variant_to_type_constructor},
  {"global_get_singleton", interface_global_get_singleton},
  {"image_ptr", interface_image_ptr},
  {"image_ptrw", interface_image_ptrw},
  {"mem_alloc", interface_mem_alloc},
  {"mem_free", interface_mem_free},
  {"mem_realloc", interface_mem_realloc},
  {"object_call_script_method", interface_object_call_script_method},
  {"object_cast_to", interface_object_cast_to},
  {"object_destroy", interface_object_destroy},
  {"object_free_instance_binding", interface_object_free_instance_binding},
  {"object_get_class_name", interface_object_get_class_name},
  {"object_get_instance_binding", interface_object_get_instance_binding},
  {"object_get_instance_from_id", interface_object_get_instance_from_id},
  {"object_get_instance_id", interface_object_get_instance_id},
  {"object_get_script_instance", interface_object_get_script_instance},
  {"object_has_script_method", interface_object_has_script_method},
  {"object_method_bind_call", interface_object_method_bind_call},
  {"object_method_bind_ptrcall", interface_object_method_bind_ptrcall},
  {"object_set_instance", interface_object_set_instance},
  {"object_set_instance_binding", interface_object_set_instance_binding},
  {"object_set_script_instance", interface_object_set_script_instance},
  {"packed_byte_array_operator_index", interface_packed_byte_array_operator_index},
  {"packed_byte_array_operator_index_const", interface_packed_byte_array_operator_index_const},
  {"packed_color_array_operator_index", interface_packed_color_array_operator_index},
  {"packed_color_array_operator_index_const", interface_packed_color_array_operator_index_const},
  {"packed_float32_array_operator_index", interface_packed_float32_array_operator_index},
  {"packed_float32_array_operator_index_const", interface_packed_float32_array_operator_index_const},
  {"packed_float64_array_operator_index", interface_packed_float64_array_operator_index},
  {"packed_float64_array_operator_index_const", interface_packed_float64_array_operator_index_const},
  {"packed_int32_array_operator_index", interface_packed_int32_array_operator_index},
  {"packed_int32_array_operator_index_const", interface_packed_int32_array_operator_index_const},
  {"packed_int64_array_operator_index", interface_packed_int64_array_operator_index},
  {"packed_int64_array_operator_index_const", interface_packed_int64_array_operator_index_const},
  {"packed_string_array_operator_index", interface_packed_string_array_operator_index},
  {"packed_string_array_operator_index_const", interface_packed_string_array_operator_index_const},
  {"packed_vector2_array_operator_index", interface_packed_vector2_array_operator_index},
  {"packed_vector2_array_operator_index_const", interface_packed_vector2_array_operator_index_const},
  {"packed_vector3_array_operator_index", interface_packed_vector3_array_operator_index},
  {"packed_vector3_array_operator_index_const", interface_packed_vector3_array_operator_index_const},
  {"packed_vector4_array_operator_index", interface_packed_vector4_array_operator_index},
  {"packed_vector4_array_operator_index_const", interface_packed_vector4_array_operator_index_const},
  {"placeholder_script_instance_create", interface_placeholder_script_instance_create},
  {"placeholder_script_instance_update", interface_placeholder_script_instance_update},
  {"print_error", interface_print_error},
  {"print_error_with_message", interface_print_error_with_message},
  {"print_script_error", interface_print_script_error},
  {"print_script_error_with_message", interface_print_script_error_with_message},
  {"print_warning", interface_print_warning},
  {"print_warning_with_message", interface_print_warning_with_message},
  {"ref_get_object", interface_ref_get_object},
  {"ref_set_object", interface_ref_set_object},
  {"register_main_loop_callbacks", interface_register_main_loop_callbacks},
  {"script_instance_create3", interface_script_instance_create3},
  {"string_name_new_with_latin1_chars", interface_string_name_new_with_latin1_chars},
  {"string_name_new_with_utf8_chars", interface_string_name_new_with_utf8_chars},
  {"string_new_with_latin1_chars", interface_string_new_with_latin1_chars},
  {"string_new_with_latin1_chars_and_len", interface_string_new_with_latin1_chars_and_len},
  {"string_new_with_utf16_chars", interface_string_new_with_utf16_chars},
  {"string_new_with_utf16_chars_and_len", interface_string_new_with_utf16_chars_and_len},
  {"string_new_with_utf16_chars_and_len2", interface_string_new_with_utf16_chars_and_len2},
  {"string_new_with_utf32_chars", interface_string_new_with_utf32_chars},
  {"string_new_with_utf32_chars_and_len", interface_string_new_with_utf32_chars_and_len},
  {"string_new_with_utf8_chars", interface_string_new_with_utf8_chars},
  {"string_new_with_utf8_chars_and_len", interface_string_new_with_utf8_chars_and_len},
  {"string_new_with_utf8_chars_and_len2", interface_string_new_with_utf8_chars_and_len2},
  {"string_new_with_wide_chars", interface_string_new_with_wide_chars},
  {"string_new_with_wide_chars_and_len", interface_string_new_with_wide_chars_and_len},
  {"string_operator_index", interface_string_operator_index},
  {"string_operator_index_const", interface_string_operator_index_const},
  {"string_operator_plus_eq_c32str", interface_string_operator_plus_eq_c32str},
  {"string_operator_plus_eq_char", interface_string_operator_plus_eq_char},
  {"string_operator_plus_eq_cstr", interface_string_operator_plus_eq_cstr},
  {"string_operator_plus_eq_string", interface_string_operator_plus_eq_string},
  {"string_operator_plus_eq_wcstr", interface_string_operator_plus_eq_wcstr},
  {"string_resize", interface_string_resize},
  {"string_to_latin1_chars", interface_string_to_latin1_chars},
  {"string_to_utf16_chars", interface_string_to_utf16_chars},
  {"string_to_utf32_chars", interface_string_to_utf32_chars},
  {"string_to_utf8_chars", interface_string_to_utf8_chars},
  {"string_to_wide_chars", interface_string_to_wide_chars},
  {"variant_booleanize", interface_variant_booleanize},
  {"variant_call", interface_variant_call},
  {"variant_call_static", interface_variant_call_static},
  {"variant_can_convert", interface_variant_can_convert},
  {"variant_can_convert_strict", interface_variant_can_convert_strict},
  {"variant_construct", interface_variant_construct},
  {"variant_destroy", interface_variant_destroy},
  {"variant_duplicate", interface_variant_duplicate},
  {"variant_evaluate", interface_variant_evaluate},
  {"variant_get", interface_variant_get},
  {"variant_get_constant_value", interface_variant_get_constant_value},
  {"variant_get_indexed", interface_variant_get_indexed},
  {"variant_get_keyed", interface_variant_get_keyed},
  {"variant_get_named", interface_variant_get_named},
  {"variant_get_object_instance_id", interface_variant_get_object_instance_id},
  {"variant_get_ptr_builtin_method", interface_variant_get_ptr_builtin_method},
  {"variant_get_ptr_constructor", interface_variant_get_ptr_constructor},
  {"variant_get_ptr_destructor", interface_variant_get_ptr_destructor},
  {"variant_get_ptr_getter", interface_variant_get_ptr_getter},
  {"variant_get_ptr_indexed_getter", interface_variant_get_ptr_indexed_getter},
  {"variant_get_ptr_indexed_setter", interface_variant_get_ptr_indexed_setter},
  {"variant_get_ptr_internal_getter", interface_variant_get_ptr_internal_getter},
  {"variant_get_ptr_keyed_checker", interface_variant_get_ptr_keyed_checker},
  {"variant_get_ptr_keyed_getter", interface_variant_get_ptr_keyed_getter},
  {"variant_get_ptr_keyed_setter", interface_variant_get_ptr_keyed_setter},
  {"variant_get_ptr_operator_evaluator", interface_variant_get_ptr_operator_evaluator},
  {"variant_get_ptr_setter", interface_variant_get_ptr_setter},
  {"variant_get_ptr_utility_function", interface_variant_get_ptr_utility_function},
  {"variant_get_type", interface_variant_get_type},
  {"variant_get_type_name", interface_variant_get_type_name},
  {"variant_has_key", interface_variant_has_key},
  {"variant_has_member", interface_variant_has_member},
  {"variant_has_method", interface_variant_has_method},
  {"variant_hash", interface_variant_hash},
  {"variant_hash_compare", interface_variant_hash_compare},
  {"variant_iter_get", interface_variant_iter_get},
  {"variant_iter_init", interface_variant_iter_init},
  {"variant_iter_next", interface_variant_iter_next},
  {"variant_new_copy", interface_variant_new_copy},
  {"variant_new_nil", interface_variant_new_nil},
  {"variant_recursive_hash", interface_variant_recursive_hash},
  {"variant_set", interface_variant_set},
  {"variant_set_indexed", interface_variant_set_indexed},
  {"variant_set_keyed", interface_variant_set_keyed},
  {"variant_set_named", interface_variant_set_named},
  {"variant_stringify", interface_variant_stringify},
  {"worker_thread_pool_add_native_group_task", interface_worker_thread_pool_add_native_group_task},
  {"worker_thread_pool_add_native_task", interface_worker_thread_pool_add_native_task},
  {"xml_parser_open_buffer", interface_xml_parser_open_buffer},
};
const std::size_t generated_interface_count=sizeof(generated_interfaces)/sizeof(generated_interfaces[0]);
}
