#include "bridge_core.hpp"
#include "callback_argument_handlers.hpp"
namespace dfbridge {
static GDExtensionBool class_set_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.set_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.set_func), {bits(p_instance), bits(p_name), bits(p_value)});
}
static GDExtensionBool class_get_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.get_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.get_func), {bits(p_instance), bits(p_name), bits(r_ret)});
}
static const GDExtensionPropertyInfo * class_get_property_list_func(GDExtensionClassInstancePtr p_instance, uint32_t * r_count) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.get_property_list_func"); return {}; }
  return guest_result<const GDExtensionPropertyInfo *>(bits(record->guest.get_property_list_func), {bits(p_instance), bits(r_count)});
}
static void class_free_property_list_func(GDExtensionClassInstancePtr p_instance, const GDExtensionPropertyInfo * p_list, uint32_t p_count) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.free_property_list_func"); return; }
  guest_result<void>(bits(record->guest.free_property_list_func), {bits(p_instance), bits(p_list), bits(p_count)});
}
static GDExtensionBool class_property_can_revert_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.property_can_revert_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.property_can_revert_func), {bits(p_instance), bits(p_name)});
}
static GDExtensionBool class_property_get_revert_func(GDExtensionClassInstancePtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.property_get_revert_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.property_get_revert_func), {bits(p_instance), bits(p_name), bits(r_ret)});
}
static GDExtensionBool class_validate_property_func(GDExtensionClassInstancePtr p_instance, GDExtensionPropertyInfo * p_property) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.validate_property_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.validate_property_func), {bits(p_instance), bits(p_property)});
}
static void class_notification_func(GDExtensionClassInstancePtr p_instance, int32_t p_what, GDExtensionBool p_reversed) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.notification_func"); return; }
  guest_result<void>(bits(record->guest.notification_func), {bits(p_instance), bits(p_what), bits(p_reversed)});
}
static void class_to_string_func(GDExtensionClassInstancePtr p_instance, GDExtensionBool * r_is_valid, GDExtensionStringPtr p_out) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.to_string_func"); return; }
  guest_result<void>(bits(record->guest.to_string_func), {bits(p_instance), bits(r_is_valid), bits(p_out)});
}
static void class_reference_func(GDExtensionClassInstancePtr p_instance) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.reference_func"); return; }
  guest_result<void>(bits(record->guest.reference_func), {bits(p_instance)});
}
static void class_unreference_func(GDExtensionClassInstancePtr p_instance) {
  auto* record = class_for_instance(p_instance);
  if (!record) { record_error("Missing callback record: class.unreference_func"); return; }
  guest_result<void>(bits(record->guest.unreference_func), {bits(p_instance)});
}
static void callable_call_func(void * callable_userdata, const GDExtensionConstVariantPtr * p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError * r_error) {
  auto* record = static_cast<CallableRecord*>(callable_userdata);
  if (!record) { record_error("Missing callback record: callable.call_func"); return; }
  guest_result<void>(bits(record->guest.call_func), {bits(record->guest.callable_userdata), bits(p_args), bits(p_argument_count), bits(r_return), bits(r_error)});
}
static GDExtensionBool callable_is_valid_func(void * callable_userdata) {
  auto* record = static_cast<CallableRecord*>(callable_userdata);
  if (!record) { record_error("Missing callback record: callable.is_valid_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.is_valid_func), {bits(record->guest.callable_userdata)});
}
static void callable_free_func(void * callable_userdata) {
  auto* record = static_cast<CallableRecord*>(callable_userdata);
  if (!record) { record_error("Missing callback record: callable.free_func"); return; }
  guest_result<void>(bits(record->guest.free_func), {bits(record->guest.callable_userdata)});
}
static uint32_t callable_hash_func(void * callable_userdata) {
  auto* record = static_cast<CallableRecord*>(callable_userdata);
  if (!record) { record_error("Missing callback record: callable.hash_func"); return {}; }
  return guest_result<uint32_t>(bits(record->guest.hash_func), {bits(record->guest.callable_userdata)});
}
static void callable_to_string_func(void * callable_userdata, GDExtensionBool * r_is_valid, GDExtensionStringPtr r_out) {
  auto* record = static_cast<CallableRecord*>(callable_userdata);
  if (!record) { record_error("Missing callback record: callable.to_string_func"); return; }
  guest_result<void>(bits(record->guest.to_string_func), {bits(record->guest.callable_userdata), bits(r_is_valid), bits(r_out)});
}
static GDExtensionInt callable_get_argument_count_func(void * callable_userdata, GDExtensionBool * r_is_valid) {
  auto* record = static_cast<CallableRecord*>(callable_userdata);
  if (!record) { record_error("Missing callback record: callable.get_argument_count_func"); return {}; }
  return guest_result<GDExtensionInt>(bits(record->guest.get_argument_count_func), {bits(record->guest.callable_userdata), bits(r_is_valid)});
}
static GDExtensionBool script_set_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.set_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.set_func), {bits(record->guest_userdata), bits(p_name), bits(p_value)});
}
static GDExtensionBool script_get_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.get_func), {bits(record->guest_userdata), bits(p_name), bits(r_ret)});
}
static const GDExtensionPropertyInfo * script_get_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, uint32_t * r_count) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_property_list_func"); return {}; }
  return guest_result<const GDExtensionPropertyInfo *>(bits(record->guest.get_property_list_func), {bits(record->guest_userdata), bits(r_count)});
}
static void script_free_property_list_func(GDExtensionScriptInstanceDataPtr p_instance, const GDExtensionPropertyInfo * p_list, uint32_t p_count) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.free_property_list_func"); return; }
  guest_result<void>(bits(record->guest.free_property_list_func), {bits(record->guest_userdata), bits(p_list), bits(p_count)});
}
static GDExtensionBool script_get_class_category_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionPropertyInfo * p_class_category) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_class_category_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.get_class_category_func), {bits(record->guest_userdata), bits(p_class_category)});
}
static GDExtensionBool script_property_can_revert_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.property_can_revert_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.property_can_revert_func), {bits(record->guest_userdata), bits(p_name)});
}
static GDExtensionBool script_property_get_revert_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.property_get_revert_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.property_get_revert_func), {bits(record->guest_userdata), bits(p_name), bits(r_ret)});
}
static GDExtensionObjectPtr script_get_owner_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_owner_func"); return {}; }
  return guest_result<GDExtensionObjectPtr>(bits(record->guest.get_owner_func), {bits(record->guest_userdata)});
}
static void script_get_property_state_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionScriptInstancePropertyStateAdd p_add_func, void * p_userdata) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_property_state_func"); return; }
  register_callback_GDExtensionScriptInstancePropertyStateAdd(p_add_func);
  guest_result<void>(bits(record->guest.get_property_state_func), {bits(record->guest_userdata), bits(p_add_func), bits(p_userdata)});
}
static const GDExtensionMethodInfo * script_get_method_list_func(GDExtensionScriptInstanceDataPtr p_instance, uint32_t * r_count) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_method_list_func"); return {}; }
  return guest_result<const GDExtensionMethodInfo *>(bits(record->guest.get_method_list_func), {bits(record->guest_userdata), bits(r_count)});
}
static void script_free_method_list_func(GDExtensionScriptInstanceDataPtr p_instance, const GDExtensionMethodInfo * p_list, uint32_t p_count) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.free_method_list_func"); return; }
  guest_result<void>(bits(record->guest.free_method_list_func), {bits(record->guest_userdata), bits(p_list), bits(p_count)});
}
static GDExtensionVariantType script_get_property_type_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionBool * r_is_valid) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_property_type_func"); return {}; }
  return guest_result<GDExtensionVariantType>(bits(record->guest.get_property_type_func), {bits(record->guest_userdata), bits(p_name), bits(r_is_valid)});
}
static GDExtensionBool script_validate_property_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionPropertyInfo * p_property) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.validate_property_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.validate_property_func), {bits(record->guest_userdata), bits(p_property)});
}
static GDExtensionBool script_has_method_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.has_method_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.has_method_func), {bits(record->guest_userdata), bits(p_name)});
}
static GDExtensionInt script_get_method_argument_count_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionBool * r_is_valid) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_method_argument_count_func"); return {}; }
  return guest_result<GDExtensionInt>(bits(record->guest.get_method_argument_count_func), {bits(record->guest_userdata), bits(p_name), bits(r_is_valid)});
}
static void script_call_func(GDExtensionScriptInstanceDataPtr p_self, GDExtensionConstStringNamePtr p_method, const GDExtensionConstVariantPtr * p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError * r_error) {
  auto* record = static_cast<ScriptRecord*>(p_self);
  if (!record) { record_error("Missing callback record: script.call_func"); return; }
  guest_result<void>(bits(record->guest.call_func), {bits(record->guest_userdata), bits(p_method), bits(p_args), bits(p_argument_count), bits(r_return), bits(r_error)});
}
static void script_notification_func(GDExtensionScriptInstanceDataPtr p_instance, int32_t p_what, GDExtensionBool p_reversed) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.notification_func"); return; }
  guest_result<void>(bits(record->guest.notification_func), {bits(record->guest_userdata), bits(p_what), bits(p_reversed)});
}
static void script_to_string_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionBool * r_is_valid, GDExtensionStringPtr r_out) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.to_string_func"); return; }
  guest_result<void>(bits(record->guest.to_string_func), {bits(record->guest_userdata), bits(r_is_valid), bits(r_out)});
}
static void script_refcount_incremented_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.refcount_incremented_func"); return; }
  guest_result<void>(bits(record->guest.refcount_incremented_func), {bits(record->guest_userdata)});
}
static GDExtensionBool script_refcount_decremented_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.refcount_decremented_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.refcount_decremented_func), {bits(record->guest_userdata)});
}
static GDExtensionObjectPtr script_get_script_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_script_func"); return {}; }
  return guest_result<GDExtensionObjectPtr>(bits(record->guest.get_script_func), {bits(record->guest_userdata)});
}
static GDExtensionBool script_is_placeholder_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.is_placeholder_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.is_placeholder_func), {bits(record->guest_userdata)});
}
static GDExtensionBool script_set_fallback_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_value) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.set_fallback_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.set_fallback_func), {bits(record->guest_userdata), bits(p_name), bits(p_value)});
}
static GDExtensionBool script_get_fallback_func(GDExtensionScriptInstanceDataPtr p_instance, GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_fallback_func"); return {}; }
  return guest_result<GDExtensionBool>(bits(record->guest.get_fallback_func), {bits(record->guest_userdata), bits(p_name), bits(r_ret)});
}
static GDExtensionScriptLanguagePtr script_get_language_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.get_language_func"); return {}; }
  return guest_result<GDExtensionScriptLanguagePtr>(bits(record->guest.get_language_func), {bits(record->guest_userdata)});
}
static void script_free_func(GDExtensionScriptInstanceDataPtr p_instance) {
  auto* record = static_cast<ScriptRecord*>(p_instance);
  if (!record) { record_error("Missing callback record: script.free_func"); return; }
  guest_result<void>(bits(record->guest.free_func), {bits(record->guest_userdata)});
}
void wrap_class_callbacks(GDExtensionClassCreationInfo5& host) {
  if (host.set_func) host.set_func = class_set_func;
  if (host.get_func) host.get_func = class_get_func;
  if (host.get_property_list_func) host.get_property_list_func = class_get_property_list_func;
  if (host.free_property_list_func) host.free_property_list_func = class_free_property_list_func;
  if (host.property_can_revert_func) host.property_can_revert_func = class_property_can_revert_func;
  if (host.property_get_revert_func) host.property_get_revert_func = class_property_get_revert_func;
  if (host.validate_property_func) host.validate_property_func = class_validate_property_func;
  if (host.notification_func) host.notification_func = class_notification_func;
  if (host.to_string_func) host.to_string_func = class_to_string_func;
  if (host.reference_func) host.reference_func = class_reference_func;
  if (host.unreference_func) host.unreference_func = class_unreference_func;
}
void wrap_callable_callbacks(GDExtensionCallableCustomInfo2& host) {
  if (host.call_func) host.call_func = callable_call_func;
  if (host.is_valid_func) host.is_valid_func = callable_is_valid_func;
  if (host.free_func) host.free_func = callable_free_func;
  if (host.hash_func) host.hash_func = callable_hash_func;
  if (host.to_string_func) host.to_string_func = callable_to_string_func;
  if (host.get_argument_count_func) host.get_argument_count_func = callable_get_argument_count_func;
}
void wrap_script_callbacks(GDExtensionScriptInstanceInfo3& host) {
  if (host.set_func) host.set_func = script_set_func;
  if (host.get_func) host.get_func = script_get_func;
  if (host.get_property_list_func) host.get_property_list_func = script_get_property_list_func;
  if (host.free_property_list_func) host.free_property_list_func = script_free_property_list_func;
  if (host.get_class_category_func) host.get_class_category_func = script_get_class_category_func;
  if (host.property_can_revert_func) host.property_can_revert_func = script_property_can_revert_func;
  if (host.property_get_revert_func) host.property_get_revert_func = script_property_get_revert_func;
  if (host.get_owner_func) host.get_owner_func = script_get_owner_func;
  if (host.get_property_state_func) host.get_property_state_func = script_get_property_state_func;
  if (host.get_method_list_func) host.get_method_list_func = script_get_method_list_func;
  if (host.free_method_list_func) host.free_method_list_func = script_free_method_list_func;
  if (host.get_property_type_func) host.get_property_type_func = script_get_property_type_func;
  if (host.validate_property_func) host.validate_property_func = script_validate_property_func;
  if (host.has_method_func) host.has_method_func = script_has_method_func;
  if (host.get_method_argument_count_func) host.get_method_argument_count_func = script_get_method_argument_count_func;
  if (host.call_func) host.call_func = script_call_func;
  if (host.notification_func) host.notification_func = script_notification_func;
  if (host.to_string_func) host.to_string_func = script_to_string_func;
  if (host.refcount_incremented_func) host.refcount_incremented_func = script_refcount_incremented_func;
  if (host.refcount_decremented_func) host.refcount_decremented_func = script_refcount_decremented_func;
  if (host.get_script_func) host.get_script_func = script_get_script_func;
  if (host.is_placeholder_func) host.is_placeholder_func = script_is_placeholder_func;
  if (host.set_fallback_func) host.set_fallback_func = script_set_fallback_func;
  if (host.get_fallback_func) host.get_fallback_func = script_get_fallback_func;
  if (host.get_language_func) host.get_language_func = script_get_language_func;
  if (host.free_func) host.free_func = script_free_func;
}
}
