/* Generated code for Python module 'requests.auth'
 * created by Nuitka version 0.6.16.3
 *
 * This code is in part copyright 2021 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_requests$auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$auth;
PyDictObject *moduledict_requests$auth;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[214];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("requests.auth"));
        constants_created = true;
    }
}

/* For multiprocessing, we want to be able to initialize the __main__ constants. */
#if (_NUITKA_PLUGIN_MULTIPROCESSING_ENABLED || _NUITKA_PLUGIN_TRACEBACK_ENCRYPTION_ENABLED) && 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$auth(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "requests.auth");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0236bc125298a21e45125b82b38c984a;
static PyCodeObject *codeobj_64cd521fc74e2ee103f12a0128242ce5;
static PyCodeObject *codeobj_13cb67ac4ae543160fcf714741fce22f;
static PyCodeObject *codeobj_43491eaaa8a2476d6bd5eb0ffc173493;
static PyCodeObject *codeobj_6c55f870a813f2162732999a0535564e;
static PyCodeObject *codeobj_a16ca483391246a7ece44d087c9f7dd2;
static PyCodeObject *codeobj_f2506b4095b80054de4b9deed77ce7fc;
static PyCodeObject *codeobj_3118f28834f1366a564ff417d1494ae8;
static PyCodeObject *codeobj_c6e43a046a9e1ecd4cb6fb73f485f478;
static PyCodeObject *codeobj_987ea0eab9aeb49001813745b395874b;
static PyCodeObject *codeobj_c89eb68ecc981e8b224880bc9175c9df;
static PyCodeObject *codeobj_0aa38cae116cc5edc5f66a517af6db98;
static PyCodeObject *codeobj_80f03cc744f04a3eed22f313834df17e;
static PyCodeObject *codeobj_f7a993c1cdb66c23a8ac4e8722b4980f;
static PyCodeObject *codeobj_5630a3c10d38d8bbc32a21da99fbca97;
static PyCodeObject *codeobj_c1cd800cdbc65c05ff3ac6e09f276cc8;
static PyCodeObject *codeobj_db119b69d9852ae035f9e438e7d89bfd;
static PyCodeObject *codeobj_ecccd0c59596affd86cab671cca07322;
static PyCodeObject *codeobj_ff61aa0e87c9a6911719eba3a9228d3f;
static PyCodeObject *codeobj_96eaaef85fdd6be5191e9d82ffac1304;
static PyCodeObject *codeobj_a02b79e01a04dab442ff1cbd9c9fdbee;
static PyCodeObject *codeobj_2cbc308d3dfb4b236827c961e1d8c4d3;
static PyCodeObject *codeobj_1b09c0b567dba178146dab36bb9d41e5;
static PyCodeObject *codeobj_0ca6bcd48aa6fee5df7a5ca492c1d80e;
static PyCodeObject *codeobj_81916ceb84da4e01757b1b858df0d5cd;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[144]; CHECK_OBJECT(module_filename_obj);
    codeobj_0236bc125298a21e45125b82b38c984a = MAKE_CODEOBJECT(module_filename_obj, 169, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[201], mod_consts[202], 2, 0, 0);
    codeobj_64cd521fc74e2ee103f12a0128242ce5 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[203], NULL, NULL, 0, 0, 0);
    codeobj_13cb67ac4ae543160fcf714741fce22f = MAKE_CODEOBJECT(module_filename_obj, 72, CO_NOFREE, mod_consts[167], mod_consts[204], NULL, 0, 0, 0);
    codeobj_43491eaaa8a2476d6bd5eb0ffc173493 = MAKE_CODEOBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[179], mod_consts[204], NULL, 0, 0, 0);
    codeobj_6c55f870a813f2162732999a0535564e = MAKE_CODEOBJECT(module_filename_obj, 108, CO_NOFREE, mod_consts[191], mod_consts[204], NULL, 0, 0, 0);
    codeobj_a16ca483391246a7ece44d087c9f7dd2 = MAKE_CODEOBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[188], mod_consts[204], NULL, 0, 0, 0);
    codeobj_f2506b4095b80054de4b9deed77ce7fc = MAKE_CODEOBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[205], NULL, 2, 0, 0);
    codeobj_3118f28834f1366a564ff417d1494ae8 = MAKE_CODEOBJECT(module_filename_obj, 95, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[205], NULL, 2, 0, 0);
    codeobj_c6e43a046a9e1ecd4cb6fb73f485f478 = MAKE_CODEOBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[205], NULL, 2, 0, 0);
    codeobj_987ea0eab9aeb49001813745b395874b = MAKE_CODEOBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[205], NULL, 2, 0, 0);
    codeobj_c89eb68ecc981e8b224880bc9175c9df = MAKE_CODEOBJECT(module_filename_obj, 86, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[206], NULL, 2, 0, 0);
    codeobj_0aa38cae116cc5edc5f66a517af6db98 = MAKE_CODEOBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[206], NULL, 2, 0, 0);
    codeobj_80f03cc744f04a3eed22f313834df17e = MAKE_CODEOBJECT(module_filename_obj, 82, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[207], NULL, 3, 0, 0);
    codeobj_f7a993c1cdb66c23a8ac4e8722b4980f = MAKE_CODEOBJECT(module_filename_obj, 111, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[207], NULL, 3, 0, 0);
    codeobj_5630a3c10d38d8bbc32a21da99fbca97 = MAKE_CODEOBJECT(module_filename_obj, 92, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[206], NULL, 2, 0, 0);
    codeobj_c1cd800cdbc65c05ff3ac6e09f276cc8 = MAKE_CODEOBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[185], mod_consts[206], NULL, 2, 0, 0);
    codeobj_db119b69d9852ae035f9e438e7d89bfd = MAKE_CODEOBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[208], NULL, 2, 0, 0);
    codeobj_ecccd0c59596affd86cab671cca07322 = MAKE_CODEOBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[127], mod_consts[209], NULL, 3, 0, 0);
    codeobj_ff61aa0e87c9a6911719eba3a9228d3f = MAKE_CODEOBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[140], mod_consts[210], NULL, 2, 0, 0);
    codeobj_96eaaef85fdd6be5191e9d82ffac1304 = MAKE_CODEOBJECT(module_filename_obj, 229, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[141], mod_consts[211], NULL, 2, 0, 0);
    codeobj_a02b79e01a04dab442ff1cbd9c9fdbee = MAKE_CODEOBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[136], mod_consts[212], NULL, 1, 0, 0);
    codeobj_2cbc308d3dfb4b236827c961e1d8c4d3 = MAKE_CODEOBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[213], NULL, 1, 0, 0);
    codeobj_1b09c0b567dba178146dab36bb9d41e5 = MAKE_CODEOBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[53], mod_consts[213], NULL, 1, 0, 0);
    codeobj_0ca6bcd48aa6fee5df7a5ca492c1d80e = MAKE_CODEOBJECT(module_filename_obj, 163, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[213], NULL, 1, 0, 0);
    codeobj_81916ceb84da4e01757b1b858df0d5cd = MAKE_CODEOBJECT(module_filename_obj, 151, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[50], mod_consts[213], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__1_md5_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__2_sha_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__3_sha256_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__4_sha512_utf8();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__5_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_requests$auth$$$function__11_handle_redirect();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__12_handle_401();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__13___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__14___eq__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__15___ne__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__1__basic_auth_str();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__2___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__3___init__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__4___eq__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__5___ne__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__6___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__7___call__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__8___init__();


static PyObject *MAKE_FUNCTION_requests$auth$$$function__9_init_per_thread_state();


// The module function definitions.
static PyObject *impl_requests$auth$$$function__1__basic_auth_str(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[0];
    PyObject *par_password = python_pars[1];
    PyObject *var_authstr = NULL;
    struct Nuitka_FrameObject *frame_db119b69d9852ae035f9e438e7d89bfd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_db119b69d9852ae035f9e438e7d89bfd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_db119b69d9852ae035f9e438e7d89bfd)) {
        Py_XDECREF(cache_frame_db119b69d9852ae035f9e438e7d89bfd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_db119b69d9852ae035f9e438e7d89bfd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_db119b69d9852ae035f9e438e7d89bfd = MAKE_FUNCTION_FRAME(codeobj_db119b69d9852ae035f9e438e7d89bfd, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_db119b69d9852ae035f9e438e7d89bfd->m_type_description == NULL);
    frame_db119b69d9852ae035f9e438e7d89bfd = cache_frame_db119b69d9852ae035f9e438e7d89bfd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_db119b69d9852ae035f9e438e7d89bfd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_db119b69d9852ae035f9e438e7d89bfd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_username);
        tmp_isinstance_inst_1 = par_username;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[2]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = mod_consts[3];
        CHECK_OBJECT(par_username);
        tmp_args_element_name_1 = par_username;
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 40;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[4], tmp_args_element_name_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[5];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 39;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (par_username == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = par_username;
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 46;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_username;
            par_username = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_password);
        tmp_isinstance_inst_2 = par_password;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[2]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = mod_consts[9];
        CHECK_OBJECT(par_password);
        tmp_type_arg_1 = par_password;
        tmp_args_element_name_3 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_args_element_name_3 == NULL));
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 50;
        tmp_tuple_element_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[4], tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_2 = PyTuple_New(1);
        PyTuple_SET_ITEM(tmp_args_name_2, 0, tmp_tuple_element_2);
        tmp_dict_key_2 = mod_consts[5];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_2);

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 49;
        tmp_call_result_2 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_password);
        tmp_args_element_name_4 = par_password;
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 56;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_password;
            assert(old != NULL);
            par_password = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(par_username);
        tmp_isinstance_inst_3 = par_username;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_username);
        tmp_called_instance_3 = par_username;
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 60;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_username;
            par_username = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(par_password);
        tmp_isinstance_inst_4 = par_password;
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(par_password);
        tmp_called_instance_4 = par_password;
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 63;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_4,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[11], 0)
        );

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_password;
            par_password = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_3;
        tmp_left_name_1 = mod_consts[12];
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_6 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_name_6 == NULL)) {
            tmp_called_name_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_3 = mod_consts[15];
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[16]);
        assert(!(tmp_called_name_7 == NULL));
        if (par_username == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_username;
        tmp_args_element_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_element_name_7, 0, tmp_tuple_element_3);
        if (par_password == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[17]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_3 = par_password;
        PyTuple_SET_ITEM0(tmp_args_element_name_7, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 66;
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 66;
        tmp_called_instance_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 66;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[18]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_db119b69d9852ae035f9e438e7d89bfd->m_frame.f_lineno = 65;
        tmp_right_name_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_5);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_authstr == NULL);
        var_authstr = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db119b69d9852ae035f9e438e7d89bfd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_db119b69d9852ae035f9e438e7d89bfd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_db119b69d9852ae035f9e438e7d89bfd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_db119b69d9852ae035f9e438e7d89bfd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_db119b69d9852ae035f9e438e7d89bfd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_db119b69d9852ae035f9e438e7d89bfd,
        type_description_1,
        par_username,
        par_password,
        var_authstr
    );


    // Release cached frame if used for exception.
    if (frame_db119b69d9852ae035f9e438e7d89bfd == cache_frame_db119b69d9852ae035f9e438e7d89bfd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_db119b69d9852ae035f9e438e7d89bfd);
        cache_frame_db119b69d9852ae035f9e438e7d89bfd = NULL;
    }

    assertFrameObject(frame_db119b69d9852ae035f9e438e7d89bfd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_authstr);
    tmp_return_value = var_authstr;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_username);
    par_username = NULL;
    Py_XDECREF(par_password);
    par_password = NULL;
    CHECK_OBJECT(var_authstr);
    Py_DECREF(var_authstr);
    var_authstr = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_username);
    par_username = NULL;
    Py_XDECREF(par_password);
    par_password = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__2___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_f2506b4095b80054de4b9deed77ce7fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f2506b4095b80054de4b9deed77ce7fc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f2506b4095b80054de4b9deed77ce7fc)) {
        Py_XDECREF(cache_frame_f2506b4095b80054de4b9deed77ce7fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f2506b4095b80054de4b9deed77ce7fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f2506b4095b80054de4b9deed77ce7fc = MAKE_FUNCTION_FRAME(codeobj_f2506b4095b80054de4b9deed77ce7fc, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f2506b4095b80054de4b9deed77ce7fc->m_type_description == NULL);
    frame_f2506b4095b80054de4b9deed77ce7fc = cache_frame_f2506b4095b80054de4b9deed77ce7fc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f2506b4095b80054de4b9deed77ce7fc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f2506b4095b80054de4b9deed77ce7fc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[20];
        frame_f2506b4095b80054de4b9deed77ce7fc->m_frame.f_lineno = 76;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2506b4095b80054de4b9deed77ce7fc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f2506b4095b80054de4b9deed77ce7fc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f2506b4095b80054de4b9deed77ce7fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f2506b4095b80054de4b9deed77ce7fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f2506b4095b80054de4b9deed77ce7fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f2506b4095b80054de4b9deed77ce7fc,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame if used for exception.
    if (frame_f2506b4095b80054de4b9deed77ce7fc == cache_frame_f2506b4095b80054de4b9deed77ce7fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f2506b4095b80054de4b9deed77ce7fc);
        cache_frame_f2506b4095b80054de4b9deed77ce7fc = NULL;
    }

    assertFrameObject(frame_f2506b4095b80054de4b9deed77ce7fc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_r);
    Py_DECREF(par_r);
    par_r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

}


static PyObject *impl_requests$auth$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_username = python_pars[1];
    PyObject *par_password = python_pars[2];
    struct Nuitka_FrameObject *frame_80f03cc744f04a3eed22f313834df17e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80f03cc744f04a3eed22f313834df17e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_80f03cc744f04a3eed22f313834df17e)) {
        Py_XDECREF(cache_frame_80f03cc744f04a3eed22f313834df17e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_80f03cc744f04a3eed22f313834df17e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_80f03cc744f04a3eed22f313834df17e = MAKE_FUNCTION_FRAME(codeobj_80f03cc744f04a3eed22f313834df17e, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_80f03cc744f04a3eed22f313834df17e->m_type_description == NULL);
    frame_80f03cc744f04a3eed22f313834df17e = cache_frame_80f03cc744f04a3eed22f313834df17e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_80f03cc744f04a3eed22f313834df17e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_80f03cc744f04a3eed22f313834df17e) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_username);
        tmp_assattr_name_1 = par_username;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_password);
        tmp_assattr_name_2 = par_password;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_80f03cc744f04a3eed22f313834df17e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_80f03cc744f04a3eed22f313834df17e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_80f03cc744f04a3eed22f313834df17e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_80f03cc744f04a3eed22f313834df17e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_80f03cc744f04a3eed22f313834df17e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_80f03cc744f04a3eed22f313834df17e,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame if used for exception.
    if (frame_80f03cc744f04a3eed22f313834df17e == cache_frame_80f03cc744f04a3eed22f313834df17e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_80f03cc744f04a3eed22f313834df17e);
        cache_frame_80f03cc744f04a3eed22f313834df17e = NULL;
    }

    assertFrameObject(frame_80f03cc744f04a3eed22f313834df17e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    par_username = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    par_username = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__4___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_c89eb68ecc981e8b224880bc9175c9df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c89eb68ecc981e8b224880bc9175c9df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c89eb68ecc981e8b224880bc9175c9df)) {
        Py_XDECREF(cache_frame_c89eb68ecc981e8b224880bc9175c9df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c89eb68ecc981e8b224880bc9175c9df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c89eb68ecc981e8b224880bc9175c9df = MAKE_FUNCTION_FRAME(codeobj_c89eb68ecc981e8b224880bc9175c9df, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c89eb68ecc981e8b224880bc9175c9df->m_type_description == NULL);
    frame_c89eb68ecc981e8b224880bc9175c9df = cache_frame_c89eb68ecc981e8b224880bc9175c9df;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c89eb68ecc981e8b224880bc9175c9df);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c89eb68ecc981e8b224880bc9175c9df) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_all_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_getattr_target_1 = par_other;
        tmp_getattr_attr_1 = mod_consts[8];
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_right_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_all_arg_1 = PyList_New(2);
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_expression_name_2;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 89;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_other);
            tmp_getattr_target_2 = par_other;
            tmp_getattr_attr_2 = mod_consts[17];
            tmp_getattr_default_2 = Py_None;
            tmp_compexpr_right_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_2);

                exception_lineno = 89;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_left_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_all_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_return_value = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c89eb68ecc981e8b224880bc9175c9df);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c89eb68ecc981e8b224880bc9175c9df);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c89eb68ecc981e8b224880bc9175c9df);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c89eb68ecc981e8b224880bc9175c9df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c89eb68ecc981e8b224880bc9175c9df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c89eb68ecc981e8b224880bc9175c9df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c89eb68ecc981e8b224880bc9175c9df,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c89eb68ecc981e8b224880bc9175c9df == cache_frame_c89eb68ecc981e8b224880bc9175c9df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c89eb68ecc981e8b224880bc9175c9df);
        cache_frame_c89eb68ecc981e8b224880bc9175c9df = NULL;
    }

    assertFrameObject(frame_c89eb68ecc981e8b224880bc9175c9df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__5___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_5630a3c10d38d8bbc32a21da99fbca97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5630a3c10d38d8bbc32a21da99fbca97 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5630a3c10d38d8bbc32a21da99fbca97)) {
        Py_XDECREF(cache_frame_5630a3c10d38d8bbc32a21da99fbca97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5630a3c10d38d8bbc32a21da99fbca97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5630a3c10d38d8bbc32a21da99fbca97 = MAKE_FUNCTION_FRAME(codeobj_5630a3c10d38d8bbc32a21da99fbca97, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_5630a3c10d38d8bbc32a21da99fbca97->m_type_description == NULL);
    frame_5630a3c10d38d8bbc32a21da99fbca97 = cache_frame_5630a3c10d38d8bbc32a21da99fbca97;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_5630a3c10d38d8bbc32a21da99fbca97);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_5630a3c10d38d8bbc32a21da99fbca97) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5630a3c10d38d8bbc32a21da99fbca97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_5630a3c10d38d8bbc32a21da99fbca97);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_5630a3c10d38d8bbc32a21da99fbca97);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5630a3c10d38d8bbc32a21da99fbca97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5630a3c10d38d8bbc32a21da99fbca97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5630a3c10d38d8bbc32a21da99fbca97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5630a3c10d38d8bbc32a21da99fbca97,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_5630a3c10d38d8bbc32a21da99fbca97 == cache_frame_5630a3c10d38d8bbc32a21da99fbca97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_5630a3c10d38d8bbc32a21da99fbca97);
        cache_frame_5630a3c10d38d8bbc32a21da99fbca97 = NULL;
    }

    assertFrameObject(frame_5630a3c10d38d8bbc32a21da99fbca97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__6___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_3118f28834f1366a564ff417d1494ae8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3118f28834f1366a564ff417d1494ae8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3118f28834f1366a564ff417d1494ae8)) {
        Py_XDECREF(cache_frame_3118f28834f1366a564ff417d1494ae8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3118f28834f1366a564ff417d1494ae8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3118f28834f1366a564ff417d1494ae8 = MAKE_FUNCTION_FRAME(codeobj_3118f28834f1366a564ff417d1494ae8, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3118f28834f1366a564ff417d1494ae8->m_type_description == NULL);
    frame_3118f28834f1366a564ff417d1494ae8 = cache_frame_3118f28834f1366a564ff417d1494ae8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3118f28834f1366a564ff417d1494ae8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3118f28834f1366a564ff417d1494ae8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_3118f28834f1366a564ff417d1494ae8->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_expression_name_3 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[23]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[24];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    if (par_r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 97;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3118f28834f1366a564ff417d1494ae8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3118f28834f1366a564ff417d1494ae8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3118f28834f1366a564ff417d1494ae8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3118f28834f1366a564ff417d1494ae8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3118f28834f1366a564ff417d1494ae8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3118f28834f1366a564ff417d1494ae8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3118f28834f1366a564ff417d1494ae8,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame if used for exception.
    if (frame_3118f28834f1366a564ff417d1494ae8 == cache_frame_3118f28834f1366a564ff417d1494ae8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3118f28834f1366a564ff417d1494ae8);
        cache_frame_3118f28834f1366a564ff417d1494ae8 = NULL;
    }

    assertFrameObject(frame_3118f28834f1366a564ff417d1494ae8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__7___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_c6e43a046a9e1ecd4cb6fb73f485f478;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478)) {
        Py_XDECREF(cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478 = MAKE_FUNCTION_FRAME(codeobj_c6e43a046a9e1ecd4cb6fb73f485f478, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478->m_type_description == NULL);
    frame_c6e43a046a9e1ecd4cb6fb73f485f478 = cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c6e43a046a9e1ecd4cb6fb73f485f478);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c6e43a046a9e1ecd4cb6fb73f485f478) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c6e43a046a9e1ecd4cb6fb73f485f478->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_expression_name_3 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[23]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[26];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    if (par_r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 105;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e43a046a9e1ecd4cb6fb73f485f478);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e43a046a9e1ecd4cb6fb73f485f478);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c6e43a046a9e1ecd4cb6fb73f485f478);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c6e43a046a9e1ecd4cb6fb73f485f478, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c6e43a046a9e1ecd4cb6fb73f485f478->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c6e43a046a9e1ecd4cb6fb73f485f478, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c6e43a046a9e1ecd4cb6fb73f485f478,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame if used for exception.
    if (frame_c6e43a046a9e1ecd4cb6fb73f485f478 == cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478);
        cache_frame_c6e43a046a9e1ecd4cb6fb73f485f478 = NULL;
    }

    assertFrameObject(frame_c6e43a046a9e1ecd4cb6fb73f485f478);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_username = python_pars[1];
    PyObject *par_password = python_pars[2];
    struct Nuitka_FrameObject *frame_f7a993c1cdb66c23a8ac4e8722b4980f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f)) {
        Py_XDECREF(cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f = MAKE_FUNCTION_FRAME(codeobj_f7a993c1cdb66c23a8ac4e8722b4980f, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f->m_type_description == NULL);
    frame_f7a993c1cdb66c23a8ac4e8722b4980f = cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_f7a993c1cdb66c23a8ac4e8722b4980f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_f7a993c1cdb66c23a8ac4e8722b4980f) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_username);
        tmp_assattr_name_1 = par_username;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[8], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_password);
        tmp_assattr_name_2 = par_password;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[17], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_assattr_target_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_f7a993c1cdb66c23a8ac4e8722b4980f->m_frame.f_lineno = 115;
        tmp_assattr_name_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[28]);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[29], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7a993c1cdb66c23a8ac4e8722b4980f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_f7a993c1cdb66c23a8ac4e8722b4980f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f7a993c1cdb66c23a8ac4e8722b4980f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f7a993c1cdb66c23a8ac4e8722b4980f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f7a993c1cdb66c23a8ac4e8722b4980f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f7a993c1cdb66c23a8ac4e8722b4980f,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame if used for exception.
    if (frame_f7a993c1cdb66c23a8ac4e8722b4980f == cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f);
        cache_frame_f7a993c1cdb66c23a8ac4e8722b4980f = NULL;
    }

    assertFrameObject(frame_f7a993c1cdb66c23a8ac4e8722b4980f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    par_username = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_username);
    Py_DECREF(par_username);
    par_username = NULL;
    CHECK_OBJECT(par_password);
    Py_DECREF(par_password);
    par_password = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__9_init_per_thread_state(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a02b79e01a04dab442ff1cbd9c9fdbee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee)) {
        Py_XDECREF(cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee = MAKE_FUNCTION_FRAME(codeobj_a02b79e01a04dab442ff1cbd9c9fdbee, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee->m_type_description == NULL);
    frame_a02b79e01a04dab442ff1cbd9c9fdbee = cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_a02b79e01a04dab442ff1cbd9c9fdbee);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_a02b79e01a04dab442ff1cbd9c9fdbee) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = mod_consts[30];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_name_1, tmp_attribute_name_1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_3;
        tmp_assattr_name_1 = Py_True;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_name_4;
        tmp_assattr_name_2 = mod_consts[31];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[29]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_5;
        tmp_assattr_name_3 = mod_consts[33];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[29]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[34], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_name_6;
        tmp_assattr_name_4 = PyDict_New();
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[29]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_4);

            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[35], tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_name_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_name_7;
        tmp_assattr_name_5 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[29]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[36], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        PyObject *tmp_expression_name_8;
        tmp_assattr_name_6 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_assattr_target_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[29]);
        if (tmp_assattr_target_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[37], tmp_assattr_name_6);
        Py_DECREF(tmp_assattr_target_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a02b79e01a04dab442ff1cbd9c9fdbee);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_a02b79e01a04dab442ff1cbd9c9fdbee);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a02b79e01a04dab442ff1cbd9c9fdbee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a02b79e01a04dab442ff1cbd9c9fdbee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a02b79e01a04dab442ff1cbd9c9fdbee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a02b79e01a04dab442ff1cbd9c9fdbee,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a02b79e01a04dab442ff1cbd9c9fdbee == cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee);
        cache_frame_a02b79e01a04dab442ff1cbd9c9fdbee = NULL;
    }

    assertFrameObject(frame_a02b79e01a04dab442ff1cbd9c9fdbee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__10_build_digest_header(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_method = python_pars[1];
    PyObject *par_url = python_pars[2];
    PyObject *var_realm = NULL;
    PyObject *var_nonce = NULL;
    PyObject *var_qop = NULL;
    PyObject *var_algorithm = NULL;
    PyObject *var_opaque = NULL;
    struct Nuitka_CellObject *var_hash_utf8 = Nuitka_Cell_Empty();
    PyObject *var__algorithm = NULL;
    PyObject *var_md5_utf8 = NULL;
    PyObject *var_sha_utf8 = NULL;
    PyObject *var_sha256_utf8 = NULL;
    PyObject *var_sha512_utf8 = NULL;
    PyObject *var_KD = NULL;
    PyObject *var_entdig = NULL;
    PyObject *var_p_parsed = NULL;
    PyObject *var_path = NULL;
    PyObject *var_A1 = NULL;
    PyObject *var_A2 = NULL;
    PyObject *var_HA1 = NULL;
    PyObject *var_HA2 = NULL;
    PyObject *var_ncvalue = NULL;
    PyObject *var_s = NULL;
    PyObject *var_cnonce = NULL;
    PyObject *var_respdig = NULL;
    PyObject *var_noncebit = NULL;
    PyObject *var_base = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_ecccd0c59596affd86cab671cca07322;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ecccd0c59596affd86cab671cca07322 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ecccd0c59596affd86cab671cca07322)) {
        Py_XDECREF(cache_frame_ecccd0c59596affd86cab671cca07322);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ecccd0c59596affd86cab671cca07322 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ecccd0c59596affd86cab671cca07322 = MAKE_FUNCTION_FRAME(codeobj_ecccd0c59596affd86cab671cca07322, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ecccd0c59596affd86cab671cca07322->m_type_description == NULL);
    frame_ecccd0c59596affd86cab671cca07322 = cache_frame_ecccd0c59596affd86cab671cca07322;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ecccd0c59596affd86cab671cca07322);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ecccd0c59596affd86cab671cca07322) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_3 = par_self;
        tmp_expression_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[29]);
        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[35]);
        Py_DECREF(tmp_expression_name_2);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = mod_consts[38];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_realm == NULL);
        var_realm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 133;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_self;
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[29]);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[35]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_expression_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = mod_consts[39];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_2);
        Py_DECREF(tmp_expression_name_4);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nonce == NULL);
        var_nonce = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_expression_name_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 134;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = par_self;
        tmp_expression_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[29]);
        if (tmp_expression_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[35]);
        Py_DECREF(tmp_expression_name_7);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 134;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[40],
            &PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_qop == NULL);
        var_qop = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_expression_name_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 135;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_self;
        tmp_expression_name_9 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[29]);
        if (tmp_expression_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[35]);
        Py_DECREF(tmp_expression_name_9);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 135;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[40],
            &PyTuple_GET_ITEM(mod_consts[42], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_algorithm == NULL);
        var_algorithm = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 136;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[29]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[35]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 136;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_3,
            mod_consts[40],
            &PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_opaque == NULL);
        var_opaque = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        assert(Nuitka_Cell_GET(var_hash_utf8) == NULL);
        Py_INCREF(tmp_assign_source_6);
        PyCell_SET(var_hash_utf8, tmp_assign_source_6);

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_algorithm);
        tmp_compexpr_left_1 = var_algorithm;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 == tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[44];
        assert(var__algorithm == NULL);
        Py_INCREF(tmp_assign_source_7);
        var__algorithm = tmp_assign_source_7;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_4;
        CHECK_OBJECT(var_algorithm);
        tmp_called_instance_4 = var_algorithm;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 142;
        tmp_assign_source_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[45]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__algorithm == NULL);
        var__algorithm = tmp_assign_source_8;
    }
    branch_end_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_or_left_value_1_object_1;
        int tmp_truth_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_tmp_or_right_value_1_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_2 = var__algorithm;
        tmp_compexpr_right_2 = mod_consts[44];
        tmp_tmp_or_left_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_or_left_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_or_left_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_1_object_1);

            exception_lineno = 144;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_1_object_1);
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_3 = var__algorithm;
        tmp_compexpr_right_3 = mod_consts[46];
        tmp_tmp_or_right_value_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_tmp_or_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_or_right_value_1_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_right_value_1_object_1);

            exception_lineno = 144;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_right_value_1_object_1);
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__1_md5_utf8();

        assert(var_md5_utf8 == NULL);
        var_md5_utf8 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(var_md5_utf8);
        tmp_assign_source_10 = var_md5_utf8;
        {
            PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
            PyCell_SET(var_hash_utf8, tmp_assign_source_10);
            Py_INCREF(tmp_assign_source_10);
            Py_XDECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_4 = var__algorithm;
        tmp_compexpr_right_4 = mod_consts[49];
        tmp_tmp_condition_result_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_3_object_1);

            exception_lineno = 150;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__2_sha_utf8();

        assert(var_sha_utf8 == NULL);
        var_sha_utf8 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(var_sha_utf8);
        tmp_assign_source_12 = var_sha_utf8;
        {
            PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
            PyCell_SET(var_hash_utf8, tmp_assign_source_12);
            Py_INCREF(tmp_assign_source_12);
            Py_XDECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_5 = var__algorithm;
        tmp_compexpr_right_5 = mod_consts[52];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 156;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__3_sha256_utf8();

        assert(var_sha256_utf8 == NULL);
        var_sha256_utf8 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(var_sha256_utf8);
        tmp_assign_source_14 = var_sha256_utf8;
        {
            PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
            PyCell_SET(var_hash_utf8, tmp_assign_source_14);
            Py_INCREF(tmp_assign_source_14);
            Py_XDECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tmp_condition_result_5_object_1;
        int tmp_truth_name_5;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_6 = var__algorithm;
        tmp_compexpr_right_6 = mod_consts[55];
        tmp_tmp_condition_result_5_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_tmp_condition_result_5_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_tmp_condition_result_5_object_1);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_5_object_1);

            exception_lineno = 162;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_5_object_1);
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__4_sha512_utf8();

        assert(var_sha512_utf8 == NULL);
        var_sha512_utf8 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(var_sha512_utf8);
        tmp_assign_source_16 = var_sha512_utf8;
        {
            PyObject *old = Nuitka_Cell_GET(var_hash_utf8);
            PyCell_SET(var_hash_utf8, tmp_assign_source_16);
            Py_INCREF(tmp_assign_source_16);
            Py_XDECREF(old);
        }

    }
    branch_no_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    {
        PyObject *tmp_assign_source_17;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = var_hash_utf8;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_17 = MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__5_lambda(tmp_closure_1);

        assert(var_KD == NULL);
        var_KD = tmp_assign_source_17;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if (Nuitka_Cell_GET(var_hash_utf8) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = Nuitka_Cell_GET(var_hash_utf8);
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_6 = (tmp_compexpr_left_7 == tmp_compexpr_right_7) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = Py_None;
        assert(var_entdig == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_entdig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_url);
        tmp_args_element_name_1 = par_url;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 176;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_p_parsed == NULL);
        var_p_parsed = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_expression_name_13;
        CHECK_OBJECT(var_p_parsed);
        tmp_expression_name_13 = var_p_parsed;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[62]);
        if (tmp_or_left_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_2);

            exception_lineno = 178;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        Py_DECREF(tmp_or_left_value_2);
        tmp_or_right_value_2 = mod_consts[63];
        Py_INCREF(tmp_or_right_value_2);
        tmp_assign_source_20 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_20 = tmp_or_left_value_2;
        or_end_2:;
        assert(var_path == NULL);
        var_path = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_6;
        if (var_p_parsed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 179;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = var_p_parsed;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[65]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 179;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(var_path);
        tmp_left_name_1 = var_path;
        tmp_left_name_2 = mod_consts[66];
        if (var_p_parsed == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 180;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_p_parsed;
        tmp_right_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[65]);
        if (tmp_right_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = tmp_left_name_1;
        var_path = tmp_assign_source_21;

    }
    branch_no_7:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_name_16;
        tmp_left_name_3 = mod_consts[67];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 182;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_16 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[8]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New(3);
        {
            PyObject *tmp_expression_name_17;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_realm);
            tmp_tuple_element_1 = var_realm;
            PyTuple_SET_ITEM0(tmp_right_name_3, 1, tmp_tuple_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_1 = "oooooooocooooooooooooooooooo";
                goto tuple_build_exception_1;
            }

            tmp_expression_name_17 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[17]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_1 = "oooooooocooooooooooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_22 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_A1 == NULL);
        var_A1 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_2;
        tmp_left_name_4 = mod_consts[68];
        CHECK_OBJECT(par_method);
        tmp_tuple_element_2 = par_method;
        tmp_right_name_4 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_4, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_path);
        tmp_tuple_element_2 = var_path;
        PyTuple_SET_ITEM0(tmp_right_name_4, 1, tmp_tuple_element_2);
        tmp_assign_source_23 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_A2 == NULL);
        var_A2 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        if (Nuitka_Cell_GET(var_hash_utf8) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 185;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = Nuitka_Cell_GET(var_hash_utf8);
        CHECK_OBJECT(var_A1);
        tmp_args_element_name_2 = var_A1;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 185;
        tmp_assign_source_24 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_2);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_HA1 == NULL);
        var_HA1 = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        if (Nuitka_Cell_GET(var_hash_utf8) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 186;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = Nuitka_Cell_GET(var_hash_utf8);
        CHECK_OBJECT(var_A2);
        tmp_args_element_name_3 = var_A2;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 186;
        tmp_assign_source_25 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_HA2 == NULL);
        var_HA2 = tmp_assign_source_25;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(var_nonce);
        tmp_compexpr_left_8 = var_nonce;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 188;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = par_self;
        tmp_expression_name_18 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[29]);
        if (tmp_expression_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[32]);
        Py_DECREF(tmp_expression_name_18);
        if (tmp_compexpr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        Py_DECREF(tmp_compexpr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
        assert(tmp_condition_result_8 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_expression_name_21;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_21 = par_self;
        tmp_expression_name_20 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[29]);
        if (tmp_expression_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[34]);
        Py_DECREF(tmp_expression_name_20);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_5;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_5 = tmp_inplace_assign_1__value;
        tmp_right_name_5 = mod_consts[69];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_5, tmp_right_name_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_27 = tmp_left_name_5;
        tmp_inplace_assign_1__value = tmp_assign_source_27;

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_22;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_1 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_22 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[29]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[34], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_name_23;
        tmp_assattr_name_2 = mod_consts[69];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 191;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_23 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[29]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[34], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_expression_name_25;
        tmp_left_name_6 = mod_consts[70];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 192;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = par_self;
        tmp_expression_name_24 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[29]);
        if (tmp_expression_name_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[34]);
        Py_DECREF(tmp_expression_name_24);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_right_name_6);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ncvalue == NULL);
        var_ncvalue = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_expression_name_27;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 193;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_27 = par_self;
        tmp_expression_name_26 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[29]);
        if (tmp_expression_name_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[34]);
        Py_DECREF(tmp_expression_name_26);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 193;
        tmp_called_instance_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_4, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 193;
        tmp_assign_source_29 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_5,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT(var_s);
        tmp_left_name_7 = var_s;
        CHECK_OBJECT(var_nonce);
        tmp_called_instance_6 = var_nonce;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 194;
        tmp_right_name_7 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_6,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_right_name_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = tmp_left_name_7;
        var_s = tmp_assign_source_30;

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        CHECK_OBJECT(var_s);
        tmp_left_name_8 = var_s;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[72]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[72]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 195;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[73]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 195;
        tmp_right_name_8 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_7,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_right_name_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = tmp_left_name_8;
        var_s = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_instance_9;
        CHECK_OBJECT(var_s);
        tmp_left_name_9 = var_s;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 196;
        tmp_right_name_9 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_9,
            mod_consts[75],
            &PyTuple_GET_ITEM(mod_consts[76], 0)
        );

        if (tmp_right_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_9, tmp_right_name_9);
        Py_DECREF(tmp_right_name_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = tmp_left_name_9;
        var_s = tmp_assign_source_32;

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_subscript_name_3;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_s);
        tmp_args_element_name_5 = var_s;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 198;
        tmp_called_instance_10 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[78], tmp_args_element_name_5);
        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 198;
        tmp_expression_name_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[79]);
        Py_DECREF(tmp_called_instance_10);
        if (tmp_expression_name_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_3 = mod_consts[80];
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_28, tmp_subscript_name_3);
        Py_DECREF(tmp_expression_name_28);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cnonce == NULL);
        var_cnonce = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_tmp_condition_result_9_object_1;
        int tmp_truth_name_7;
        CHECK_OBJECT(var__algorithm);
        tmp_compexpr_left_9 = var__algorithm;
        tmp_compexpr_right_9 = mod_consts[46];
        tmp_tmp_condition_result_9_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_9, tmp_compexpr_right_9);
        if (tmp_tmp_condition_result_9_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_tmp_condition_result_9_object_1);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_9_object_1);

            exception_lineno = 199;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_9_object_1);
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_tuple_element_3;
        if (Nuitka_Cell_GET(var_hash_utf8) == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = Nuitka_Cell_GET(var_hash_utf8);
        tmp_left_name_10 = mod_consts[67];
        CHECK_OBJECT(var_HA1);
        tmp_tuple_element_3 = var_HA1;
        tmp_right_name_10 = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_right_name_10, 0, tmp_tuple_element_3);
        if (var_nonce == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto tuple_build_exception_2;
        }

        tmp_tuple_element_3 = var_nonce;
        PyTuple_SET_ITEM0(tmp_right_name_10, 1, tmp_tuple_element_3);
        CHECK_OBJECT(var_cnonce);
        tmp_tuple_element_3 = var_cnonce;
        PyTuple_SET_ITEM0(tmp_right_name_10, 2, tmp_tuple_element_3);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_name_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 200;
        tmp_assign_source_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_HA1;
            assert(old != NULL);
            var_HA1 = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT(var_qop);
        tmp_operand_name_1 = var_qop;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_11;
        PyObject *tmp_right_name_11;
        PyObject *tmp_tuple_element_4;
        CHECK_OBJECT(var_KD);
        tmp_called_name_6 = var_KD;
        CHECK_OBJECT(var_HA1);
        tmp_args_element_name_7 = var_HA1;
        tmp_left_name_11 = mod_consts[68];
        if (var_nonce == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 203;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_4 = var_nonce;
        tmp_right_name_11 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_11, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_HA2);
        tmp_tuple_element_4 = var_HA2;
        PyTuple_SET_ITEM0(tmp_right_name_11, 1, tmp_tuple_element_4);
        tmp_args_element_name_8 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_11, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_6, call_args);
        }

        Py_DECREF(tmp_args_element_name_8);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_respdig == NULL);
        var_respdig = tmp_assign_source_35;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        int tmp_or_left_truth_3;
        nuitka_bool tmp_or_left_value_3;
        nuitka_bool tmp_or_right_value_3;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_tmp_or_left_value_3_object_1;
        int tmp_truth_name_8;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT(var_qop);
        tmp_compexpr_left_10 = var_qop;
        tmp_compexpr_right_10 = mod_consts[81];
        tmp_tmp_or_left_value_3_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_tmp_or_left_value_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_or_left_value_3_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_or_left_value_3_object_1);

            exception_lineno = 204;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_or_left_value_3_object_1);
        tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        tmp_compexpr_left_11 = mod_consts[81];
        CHECK_OBJECT(var_qop);
        tmp_called_instance_12 = var_qop;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 204;
        tmp_compexpr_right_11 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_12,
            mod_consts[82],
            &PyTuple_GET_ITEM(mod_consts[83], 0)
        );

        if (tmp_compexpr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_11, tmp_compexpr_left_11);
        Py_DECREF(tmp_compexpr_right_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_11 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_condition_result_11 = tmp_or_left_value_3;
        or_end_3:;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_12;
        PyObject *tmp_tuple_element_5;
        tmp_left_name_12 = mod_consts[84];
        if (var_nonce == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 206;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = var_nonce;
        tmp_right_name_12 = PyTuple_New(5);
        PyTuple_SET_ITEM0(tmp_right_name_12, 0, tmp_tuple_element_5);
        CHECK_OBJECT(var_ncvalue);
        tmp_tuple_element_5 = var_ncvalue;
        PyTuple_SET_ITEM0(tmp_right_name_12, 1, tmp_tuple_element_5);
        CHECK_OBJECT(var_cnonce);
        tmp_tuple_element_5 = var_cnonce;
        PyTuple_SET_ITEM0(tmp_right_name_12, 2, tmp_tuple_element_5);
        tmp_tuple_element_5 = mod_consts[81];
        PyTuple_SET_ITEM0(tmp_right_name_12, 3, tmp_tuple_element_5);
        CHECK_OBJECT(var_HA2);
        tmp_tuple_element_5 = var_HA2;
        PyTuple_SET_ITEM0(tmp_right_name_12, 4, tmp_tuple_element_5);
        tmp_assign_source_36 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_12, tmp_right_name_12);
        Py_DECREF(tmp_right_name_12);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_noncebit == NULL);
        var_noncebit = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_args_element_name_10;
        CHECK_OBJECT(var_KD);
        tmp_called_name_7 = var_KD;
        CHECK_OBJECT(var_HA1);
        tmp_args_element_name_9 = var_HA1;
        CHECK_OBJECT(var_noncebit);
        tmp_args_element_name_10 = var_noncebit;
        frame_ecccd0c59596affd86cab671cca07322->m_frame.f_lineno = 208;
        {
            PyObject *call_args[] = {tmp_args_element_name_9, tmp_args_element_name_10};
            tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_respdig == NULL);
        var_respdig = tmp_assign_source_37;
    }
    goto branch_end_11;
    branch_no_11:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_11:;
    branch_end_10:;
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_29;
        if (var_nonce == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = var_nonce;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_29 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[29]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[32], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_name_30;
        tmp_left_name_13 = mod_consts[85];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_30 = par_self;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[8]);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = PyTuple_New(5);
        PyTuple_SET_ITEM(tmp_right_name_13, 0, tmp_tuple_element_6);
        CHECK_OBJECT(var_realm);
        tmp_tuple_element_6 = var_realm;
        PyTuple_SET_ITEM0(tmp_right_name_13, 1, tmp_tuple_element_6);
        if (var_nonce == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_6 = var_nonce;
        PyTuple_SET_ITEM0(tmp_right_name_13, 2, tmp_tuple_element_6);
        CHECK_OBJECT(var_path);
        tmp_tuple_element_6 = var_path;
        PyTuple_SET_ITEM0(tmp_right_name_13, 3, tmp_tuple_element_6);
        if (var_respdig == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 217;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto tuple_build_exception_3;
        }

        tmp_tuple_element_6 = var_respdig;
        PyTuple_SET_ITEM0(tmp_right_name_13, 4, tmp_tuple_element_6);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_assign_source_38 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_right_name_13);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_base == NULL);
        var_base = tmp_assign_source_38;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_9;
        CHECK_OBJECT(var_opaque);
        tmp_truth_name_9 = CHECK_IF_TRUE(var_opaque);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_15;
        CHECK_OBJECT(var_base);
        tmp_left_name_14 = var_base;
        tmp_left_name_15 = mod_consts[87];
        CHECK_OBJECT(var_opaque);
        tmp_right_name_15 = var_opaque;
        tmp_right_name_14 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_15, tmp_right_name_15);
        if (tmp_right_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_UNICODE_OBJECT_INPLACE(&tmp_left_name_14, tmp_right_name_14);
        Py_DECREF(tmp_right_name_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = tmp_left_name_14;
        var_base = tmp_assign_source_39;

    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_10;
        if (var_algorithm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 220;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_10 = CHECK_IF_TRUE(var_algorithm);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_left_name_16;
        PyObject *tmp_right_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_17;
        CHECK_OBJECT(var_base);
        tmp_left_name_16 = var_base;
        tmp_left_name_17 = mod_consts[89];
        if (var_algorithm == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[88]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_17 = var_algorithm;
        tmp_right_name_16 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_17, tmp_right_name_17);
        if (tmp_right_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE(&tmp_left_name_16, tmp_right_name_16);
        Py_DECREF(tmp_right_name_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = tmp_left_name_16;
        var_base = tmp_assign_source_40;

    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_11;
        if (var_qop == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_11 = CHECK_IF_TRUE(var_qop);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_left_name_18;
        PyObject *tmp_right_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_19;
        PyObject *tmp_tuple_element_7;
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_18 = var_base;
        tmp_left_name_19 = mod_consts[92];
        CHECK_OBJECT(var_ncvalue);
        tmp_tuple_element_7 = var_ncvalue;
        tmp_right_name_19 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_19, 0, tmp_tuple_element_7);
        CHECK_OBJECT(var_cnonce);
        tmp_tuple_element_7 = var_cnonce;
        PyTuple_SET_ITEM0(tmp_right_name_19, 1, tmp_tuple_element_7);
        tmp_right_name_18 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_19, tmp_right_name_19);
        Py_DECREF(tmp_right_name_19);
        if (tmp_right_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_UNICODE_INPLACE(&tmp_left_name_18, tmp_right_name_18);
        Py_DECREF(tmp_right_name_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = tmp_left_name_18;
        var_base = tmp_assign_source_41;

    }
    branch_no_14:;
    {
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        tmp_left_name_20 = mod_consts[93];
        if (var_base == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 227;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_20 = var_base;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_left_name_20, tmp_right_name_20);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "oooooooocooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ecccd0c59596affd86cab671cca07322);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ecccd0c59596affd86cab671cca07322);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ecccd0c59596affd86cab671cca07322);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ecccd0c59596affd86cab671cca07322, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ecccd0c59596affd86cab671cca07322->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ecccd0c59596affd86cab671cca07322, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ecccd0c59596affd86cab671cca07322,
        type_description_1,
        par_self,
        par_method,
        par_url,
        var_realm,
        var_nonce,
        var_qop,
        var_algorithm,
        var_opaque,
        var_hash_utf8,
        var__algorithm,
        var_md5_utf8,
        var_sha_utf8,
        var_sha256_utf8,
        var_sha512_utf8,
        var_KD,
        var_entdig,
        var_p_parsed,
        var_path,
        var_A1,
        var_A2,
        var_HA1,
        var_HA2,
        var_ncvalue,
        var_s,
        var_cnonce,
        var_respdig,
        var_noncebit,
        var_base
    );


    // Release cached frame if used for exception.
    if (frame_ecccd0c59596affd86cab671cca07322 == cache_frame_ecccd0c59596affd86cab671cca07322) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ecccd0c59596affd86cab671cca07322);
        cache_frame_ecccd0c59596affd86cab671cca07322 = NULL;
    }

    assertFrameObject(frame_ecccd0c59596affd86cab671cca07322);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    par_url = NULL;
    CHECK_OBJECT(var_realm);
    Py_DECREF(var_realm);
    var_realm = NULL;
    Py_XDECREF(var_nonce);
    var_nonce = NULL;
    Py_XDECREF(var_qop);
    var_qop = NULL;
    Py_XDECREF(var_algorithm);
    var_algorithm = NULL;
    Py_XDECREF(var_opaque);
    var_opaque = NULL;
    CHECK_OBJECT(var_hash_utf8);
    Py_DECREF(var_hash_utf8);
    var_hash_utf8 = NULL;
    CHECK_OBJECT(var__algorithm);
    Py_DECREF(var__algorithm);
    var__algorithm = NULL;
    Py_XDECREF(var_md5_utf8);
    var_md5_utf8 = NULL;
    Py_XDECREF(var_sha_utf8);
    var_sha_utf8 = NULL;
    Py_XDECREF(var_sha256_utf8);
    var_sha256_utf8 = NULL;
    Py_XDECREF(var_sha512_utf8);
    var_sha512_utf8 = NULL;
    CHECK_OBJECT(var_KD);
    Py_DECREF(var_KD);
    var_KD = NULL;
    Py_XDECREF(var_entdig);
    var_entdig = NULL;
    Py_XDECREF(var_p_parsed);
    var_p_parsed = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_A1);
    var_A1 = NULL;
    Py_XDECREF(var_A2);
    var_A2 = NULL;
    Py_XDECREF(var_HA1);
    var_HA1 = NULL;
    Py_XDECREF(var_HA2);
    var_HA2 = NULL;
    Py_XDECREF(var_ncvalue);
    var_ncvalue = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_cnonce);
    var_cnonce = NULL;
    Py_XDECREF(var_respdig);
    var_respdig = NULL;
    Py_XDECREF(var_noncebit);
    var_noncebit = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_method);
    Py_DECREF(par_method);
    par_method = NULL;
    CHECK_OBJECT(par_url);
    Py_DECREF(par_url);
    par_url = NULL;
    Py_XDECREF(var_realm);
    var_realm = NULL;
    Py_XDECREF(var_nonce);
    var_nonce = NULL;
    Py_XDECREF(var_qop);
    var_qop = NULL;
    Py_XDECREF(var_algorithm);
    var_algorithm = NULL;
    Py_XDECREF(var_opaque);
    var_opaque = NULL;
    CHECK_OBJECT(var_hash_utf8);
    Py_DECREF(var_hash_utf8);
    var_hash_utf8 = NULL;
    Py_XDECREF(var__algorithm);
    var__algorithm = NULL;
    Py_XDECREF(var_md5_utf8);
    var_md5_utf8 = NULL;
    Py_XDECREF(var_sha_utf8);
    var_sha_utf8 = NULL;
    Py_XDECREF(var_sha256_utf8);
    var_sha256_utf8 = NULL;
    Py_XDECREF(var_sha512_utf8);
    var_sha512_utf8 = NULL;
    Py_XDECREF(var_KD);
    var_KD = NULL;
    Py_XDECREF(var_entdig);
    var_entdig = NULL;
    Py_XDECREF(var_p_parsed);
    var_p_parsed = NULL;
    Py_XDECREF(var_path);
    var_path = NULL;
    Py_XDECREF(var_A1);
    var_A1 = NULL;
    Py_XDECREF(var_A2);
    var_A2 = NULL;
    Py_XDECREF(var_HA1);
    var_HA1 = NULL;
    Py_XDECREF(var_HA2);
    var_HA2 = NULL;
    Py_XDECREF(var_ncvalue);
    var_ncvalue = NULL;
    Py_XDECREF(var_s);
    var_s = NULL;
    Py_XDECREF(var_cnonce);
    var_cnonce = NULL;
    Py_XDECREF(var_respdig);
    var_respdig = NULL;
    Py_XDECREF(var_noncebit);
    var_noncebit = NULL;
    Py_XDECREF(var_base);
    var_base = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__10_build_digest_header$$$function__1_md5_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_2cbc308d3dfb4b236827c961e1d8c4d3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3)) {
        Py_XDECREF(cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3 = MAKE_FUNCTION_FRAME(codeobj_2cbc308d3dfb4b236827c961e1d8c4d3, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3->m_type_description == NULL);
    frame_2cbc308d3dfb4b236827c961e1d8c4d3 = cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_2cbc308d3dfb4b236827c961e1d8c4d3);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_2cbc308d3dfb4b236827c961e1d8c4d3) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_2cbc308d3dfb4b236827c961e1d8c4d3->m_frame.f_lineno = 147;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_2cbc308d3dfb4b236827c961e1d8c4d3->m_frame.f_lineno = 148;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[95], tmp_args_element_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2cbc308d3dfb4b236827c961e1d8c4d3->m_frame.f_lineno = 148;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2cbc308d3dfb4b236827c961e1d8c4d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_2cbc308d3dfb4b236827c961e1d8c4d3);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_2cbc308d3dfb4b236827c961e1d8c4d3);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2cbc308d3dfb4b236827c961e1d8c4d3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2cbc308d3dfb4b236827c961e1d8c4d3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2cbc308d3dfb4b236827c961e1d8c4d3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2cbc308d3dfb4b236827c961e1d8c4d3,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_2cbc308d3dfb4b236827c961e1d8c4d3 == cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3);
        cache_frame_2cbc308d3dfb4b236827c961e1d8c4d3 = NULL;
    }

    assertFrameObject(frame_2cbc308d3dfb4b236827c961e1d8c4d3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__10_build_digest_header$$$function__2_sha_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_81916ceb84da4e01757b1b858df0d5cd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_81916ceb84da4e01757b1b858df0d5cd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_81916ceb84da4e01757b1b858df0d5cd)) {
        Py_XDECREF(cache_frame_81916ceb84da4e01757b1b858df0d5cd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81916ceb84da4e01757b1b858df0d5cd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81916ceb84da4e01757b1b858df0d5cd = MAKE_FUNCTION_FRAME(codeobj_81916ceb84da4e01757b1b858df0d5cd, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_81916ceb84da4e01757b1b858df0d5cd->m_type_description == NULL);
    frame_81916ceb84da4e01757b1b858df0d5cd = cache_frame_81916ceb84da4e01757b1b858df0d5cd;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_81916ceb84da4e01757b1b858df0d5cd);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_81916ceb84da4e01757b1b858df0d5cd) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_81916ceb84da4e01757b1b858df0d5cd->m_frame.f_lineno = 153;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_81916ceb84da4e01757b1b858df0d5cd->m_frame.f_lineno = 154;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[78], tmp_args_element_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_81916ceb84da4e01757b1b858df0d5cd->m_frame.f_lineno = 154;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81916ceb84da4e01757b1b858df0d5cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_81916ceb84da4e01757b1b858df0d5cd);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_81916ceb84da4e01757b1b858df0d5cd);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_81916ceb84da4e01757b1b858df0d5cd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81916ceb84da4e01757b1b858df0d5cd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81916ceb84da4e01757b1b858df0d5cd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81916ceb84da4e01757b1b858df0d5cd,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_81916ceb84da4e01757b1b858df0d5cd == cache_frame_81916ceb84da4e01757b1b858df0d5cd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_81916ceb84da4e01757b1b858df0d5cd);
        cache_frame_81916ceb84da4e01757b1b858df0d5cd = NULL;
    }

    assertFrameObject(frame_81916ceb84da4e01757b1b858df0d5cd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__10_build_digest_header$$$function__3_sha256_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_1b09c0b567dba178146dab36bb9d41e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1b09c0b567dba178146dab36bb9d41e5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1b09c0b567dba178146dab36bb9d41e5)) {
        Py_XDECREF(cache_frame_1b09c0b567dba178146dab36bb9d41e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1b09c0b567dba178146dab36bb9d41e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1b09c0b567dba178146dab36bb9d41e5 = MAKE_FUNCTION_FRAME(codeobj_1b09c0b567dba178146dab36bb9d41e5, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_1b09c0b567dba178146dab36bb9d41e5->m_type_description == NULL);
    frame_1b09c0b567dba178146dab36bb9d41e5 = cache_frame_1b09c0b567dba178146dab36bb9d41e5;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_1b09c0b567dba178146dab36bb9d41e5);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_1b09c0b567dba178146dab36bb9d41e5) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_1b09c0b567dba178146dab36bb9d41e5->m_frame.f_lineno = 159;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_1b09c0b567dba178146dab36bb9d41e5->m_frame.f_lineno = 160;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[96], tmp_args_element_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1b09c0b567dba178146dab36bb9d41e5->m_frame.f_lineno = 160;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b09c0b567dba178146dab36bb9d41e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b09c0b567dba178146dab36bb9d41e5);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_1b09c0b567dba178146dab36bb9d41e5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1b09c0b567dba178146dab36bb9d41e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1b09c0b567dba178146dab36bb9d41e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1b09c0b567dba178146dab36bb9d41e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1b09c0b567dba178146dab36bb9d41e5,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_1b09c0b567dba178146dab36bb9d41e5 == cache_frame_1b09c0b567dba178146dab36bb9d41e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_1b09c0b567dba178146dab36bb9d41e5);
        cache_frame_1b09c0b567dba178146dab36bb9d41e5 = NULL;
    }

    assertFrameObject(frame_1b09c0b567dba178146dab36bb9d41e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__10_build_digest_header$$$function__4_sha512_utf8(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[0];
    struct Nuitka_FrameObject *frame_0ca6bcd48aa6fee5df7a5ca492c1d80e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e)) {
        Py_XDECREF(cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e = MAKE_FUNCTION_FRAME(codeobj_0ca6bcd48aa6fee5df7a5ca492c1d80e, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e->m_type_description == NULL);
    frame_0ca6bcd48aa6fee5df7a5ca492c1d80e = cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_x);
        tmp_isinstance_inst_1 = par_x;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_0ca6bcd48aa6fee5df7a5ca492c1d80e->m_frame.f_lineno = 165;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_1,
            mod_consts[10],
            &PyTuple_GET_ITEM(mod_consts[71], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            par_x = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_name_1 = par_x;
        frame_0ca6bcd48aa6fee5df7a5ca492c1d80e->m_frame.f_lineno = 166;
        tmp_called_instance_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[97], tmp_args_element_name_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0ca6bcd48aa6fee5df7a5ca492c1d80e->m_frame.f_lineno = 166;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[79]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ca6bcd48aa6fee5df7a5ca492c1d80e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ca6bcd48aa6fee5df7a5ca492c1d80e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ca6bcd48aa6fee5df7a5ca492c1d80e,
        type_description_1,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_0ca6bcd48aa6fee5df7a5ca492c1d80e == cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);
        cache_frame_0ca6bcd48aa6fee5df7a5ca492c1d80e = NULL;
    }

    assertFrameObject(frame_0ca6bcd48aa6fee5df7a5ca492c1d80e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_x);
    par_x = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_x);
    par_x = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__10_build_digest_header$$$function__5_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_d = python_pars[1];
    struct Nuitka_FrameObject *frame_0236bc125298a21e45125b82b38c984a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0236bc125298a21e45125b82b38c984a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0236bc125298a21e45125b82b38c984a)) {
        Py_XDECREF(cache_frame_0236bc125298a21e45125b82b38c984a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0236bc125298a21e45125b82b38c984a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0236bc125298a21e45125b82b38c984a = MAKE_FUNCTION_FRAME(codeobj_0236bc125298a21e45125b82b38c984a, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0236bc125298a21e45125b82b38c984a->m_type_description == NULL);
    frame_0236bc125298a21e45125b82b38c984a = cache_frame_0236bc125298a21e45125b82b38c984a;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0236bc125298a21e45125b82b38c984a);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0236bc125298a21e45125b82b38c984a) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_left_name_1 = mod_consts[68];
        CHECK_OBJECT(par_s);
        tmp_tuple_element_1 = par_s;
        tmp_right_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_right_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_d);
        tmp_tuple_element_1 = par_d;
        PyTuple_SET_ITEM0(tmp_right_name_1, 1, tmp_tuple_element_1);
        tmp_args_element_name_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_0236bc125298a21e45125b82b38c984a->m_frame.f_lineno = 169;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0236bc125298a21e45125b82b38c984a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0236bc125298a21e45125b82b38c984a);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0236bc125298a21e45125b82b38c984a);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0236bc125298a21e45125b82b38c984a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0236bc125298a21e45125b82b38c984a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0236bc125298a21e45125b82b38c984a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0236bc125298a21e45125b82b38c984a,
        type_description_1,
        par_s,
        par_d,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_0236bc125298a21e45125b82b38c984a == cache_frame_0236bc125298a21e45125b82b38c984a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0236bc125298a21e45125b82b38c984a);
        cache_frame_0236bc125298a21e45125b82b38c984a = NULL;
    }

    assertFrameObject(frame_0236bc125298a21e45125b82b38c984a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    par_s = NULL;
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    par_d = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    par_s = NULL;
    CHECK_OBJECT(par_d);
    Py_DECREF(par_d);
    par_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__11_handle_redirect(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    struct Nuitka_FrameObject *frame_96eaaef85fdd6be5191e9d82ffac1304;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_96eaaef85fdd6be5191e9d82ffac1304 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_96eaaef85fdd6be5191e9d82ffac1304)) {
        Py_XDECREF(cache_frame_96eaaef85fdd6be5191e9d82ffac1304);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96eaaef85fdd6be5191e9d82ffac1304 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96eaaef85fdd6be5191e9d82ffac1304 = MAKE_FUNCTION_FRAME(codeobj_96eaaef85fdd6be5191e9d82ffac1304, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_96eaaef85fdd6be5191e9d82ffac1304->m_type_description == NULL);
    frame_96eaaef85fdd6be5191e9d82ffac1304 = cache_frame_96eaaef85fdd6be5191e9d82ffac1304;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_96eaaef85fdd6be5191e9d82ffac1304);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_96eaaef85fdd6be5191e9d82ffac1304) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_r);
        tmp_expression_name_1 = par_r;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[98]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_2;
        tmp_assattr_name_1 = mod_consts[69];
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96eaaef85fdd6be5191e9d82ffac1304);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_96eaaef85fdd6be5191e9d82ffac1304);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_96eaaef85fdd6be5191e9d82ffac1304, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96eaaef85fdd6be5191e9d82ffac1304->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96eaaef85fdd6be5191e9d82ffac1304, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96eaaef85fdd6be5191e9d82ffac1304,
        type_description_1,
        par_self,
        par_r,
        par_kwargs
    );


    // Release cached frame if used for exception.
    if (frame_96eaaef85fdd6be5191e9d82ffac1304 == cache_frame_96eaaef85fdd6be5191e9d82ffac1304) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_96eaaef85fdd6be5191e9d82ffac1304);
        cache_frame_96eaaef85fdd6be5191e9d82ffac1304 = NULL;
    }

    assertFrameObject(frame_96eaaef85fdd6be5191e9d82ffac1304);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__12_handle_401(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_s_auth = NULL;
    PyObject *var_pat = NULL;
    PyObject *var_prep = NULL;
    PyObject *var__r = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    struct Nuitka_FrameObject *frame_ff61aa0e87c9a6911719eba3a9228d3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ff61aa0e87c9a6911719eba3a9228d3f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff61aa0e87c9a6911719eba3a9228d3f)) {
        Py_XDECREF(cache_frame_ff61aa0e87c9a6911719eba3a9228d3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff61aa0e87c9a6911719eba3a9228d3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff61aa0e87c9a6911719eba3a9228d3f = MAKE_FUNCTION_FRAME(codeobj_ff61aa0e87c9a6911719eba3a9228d3f, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_ff61aa0e87c9a6911719eba3a9228d3f->m_type_description == NULL);
    frame_ff61aa0e87c9a6911719eba3a9228d3f = cache_frame_ff61aa0e87c9a6911719eba3a9228d3f;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_ff61aa0e87c9a6911719eba3a9228d3f);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_ff61aa0e87c9a6911719eba3a9228d3f) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_expression_name_1;
            CHECK_OBJECT(par_r);
            tmp_expression_name_1 = par_r;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[100]);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__operand_2 == NULL);
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = mod_consts[101];
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert(tmp_comparison_chain_1__comparison_result == NULL);
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
            tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
                goto branch_yes_2;
            } else {
                goto branch_no_2;
            }
        }
        branch_yes_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
        Py_INCREF(tmp_operand_name_1);
        goto try_return_handler_2;
        branch_no_2:;
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = mod_consts[102];
            tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_operand_name_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_comparison_chain_1__operand_2);
        Py_DECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        CHECK_OBJECT(tmp_comparison_chain_1__comparison_result);
        Py_DECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_2:;
        exception_keeper_type_1 = exception_type;
        exception_keeper_value_1 = exception_value;
        exception_keeper_tb_1 = exception_tb;
        exception_keeper_lineno_1 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(tmp_comparison_chain_1__operand_2);
        tmp_comparison_chain_1__operand_2 = NULL;
        Py_XDECREF(tmp_comparison_chain_1__comparison_result);
        tmp_comparison_chain_1__comparison_result = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_2;
        tmp_assattr_name_1 = mod_consts[69];
        CHECK_OBJECT(par_self);
        tmp_expression_name_2 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (par_r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 245;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(par_self);
        tmp_expression_name_4 = par_self;
        tmp_expression_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[29]);
        if (tmp_expression_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[36]);
        Py_DECREF(tmp_expression_name_3);
        if (tmp_compexpr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_compexpr_left_3 != tmp_compexpr_right_3) ? true : false;
        Py_DECREF(tmp_compexpr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_expression_name_9;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = par_r;
        tmp_expression_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[103]);
        if (tmp_expression_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[104]);
        Py_DECREF(tmp_expression_name_6);
        if (tmp_expression_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[105]);
        Py_DECREF(tmp_expression_name_5);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = par_self;
        tmp_expression_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[29]);
        if (tmp_expression_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[36]);
        Py_DECREF(tmp_expression_name_8);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 250;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_10;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_r;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_1,
            mod_consts[40],
            &PyTuple_GET_ITEM(mod_consts[106], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_s_auth == NULL);
        var_s_auth = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_tmp_and_right_value_1_object_1;
        int tmp_truth_name_1;
        tmp_compexpr_left_4 = mod_consts[107];
        CHECK_OBJECT(var_s_auth);
        tmp_called_instance_2 = var_s_auth;
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 253;
        tmp_compexpr_right_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[108]);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_self;
        tmp_expression_name_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[29]);
        if (tmp_expression_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[37]);
        Py_DECREF(tmp_expression_name_11);
        if (tmp_compexpr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = mod_consts[109];
        tmp_tmp_and_right_value_1_object_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        Py_DECREF(tmp_compexpr_left_5);
        if (tmp_tmp_and_right_value_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_and_right_value_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_and_right_value_1_object_1);

            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_and_right_value_1_object_1);
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_expression_name_14;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_self;
        tmp_expression_name_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[29]);
        if (tmp_expression_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[37]);
        Py_DECREF(tmp_expression_name_13);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_left_name_1 = tmp_inplace_assign_1__value;
        tmp_right_name_1 = mod_consts[69];
        tmp_result = BINARY_OPERATION_ADD_OBJECT_LONG_INPLACE(&tmp_left_name_1, tmp_right_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_5 = tmp_left_name_1;
        tmp_inplace_assign_1__value = tmp_assign_source_5;

    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_name_15;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_name_2 = tmp_inplace_assign_1__value;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }

        tmp_expression_name_15 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[29]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[37], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooo";
            goto try_except_handler_3;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_inplace_assign_1__value);
    Py_DECREF(tmp_inplace_assign_1__value);
    tmp_inplace_assign_1__value = NULL;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_args_name_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_name_17;
        tmp_expression_name_16 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_name_16 == NULL)) {
            tmp_expression_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_expression_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_16, mod_consts[111]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = mod_consts[112];
        tmp_dict_key_1 = mod_consts[113];
        tmp_expression_name_17 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_expression_name_17 == NULL)) {
            tmp_expression_name_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_expression_name_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_17, mod_consts[114]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kwargs_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 256;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pat == NULL);
        var_pat = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_19;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pat);
        tmp_expression_name_18 = var_pat;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[116]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[31];
        tmp_args_name_2 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_1);
        if (var_s_auth == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_s_auth;
        PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_name_2 = PyDict_Copy(mod_consts[118]);
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 257;
        tmp_args_element_name_2 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_2, tmp_kwargs_name_2);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 257;
        tmp_assattr_name_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_assattr_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_19 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_19, mod_consts[29]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_3);

            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[35], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_expression_name_20;
        PyObject *tmp_attribute_value_1;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_20 = par_r;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[119]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_attribute_value_1);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = par_r;
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 262;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[120]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_name_21;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_21 = par_r;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_21, mod_consts[103]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 263;
        tmp_assign_source_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[121]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prep == NULL);
        var_prep = tmp_assign_source_7;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_expression_name_24;
        tmp_called_name_5 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_called_name_5 == NULL)) {
            tmp_called_name_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_prep);
        tmp_expression_name_22 = var_prep;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_22, mod_consts[123]);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_r == NULL) {
            Py_DECREF(tmp_args_element_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_23 = par_r;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_23, mod_consts[103]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_3);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_r == NULL) {
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_24 = par_r;
        tmp_args_element_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_24, mod_consts[124]);
        if (tmp_args_element_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_name_3);
            Py_DECREF(tmp_args_element_name_4);

            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 264;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_name_5, call_args);
        }

        Py_DECREF(tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_26;
        if (var_prep == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_25 = var_prep;
        tmp_called_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_25, mod_consts[126]);
        if (tmp_called_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_prep == NULL) {
            Py_DECREF(tmp_called_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_26 = var_prep;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_26, mod_consts[123]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_6);

            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 265;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_6);
        Py_DECREF(tmp_called_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_27 = par_self;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_27, mod_consts[127]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_prep == NULL) {
            Py_DECREF(tmp_called_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_28 = var_prep;
        tmp_args_element_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_28, mod_consts[128]);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_prep == NULL) {
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_29 = var_prep;
        tmp_args_element_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_29, mod_consts[129]);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_7);
            Py_DECREF(tmp_args_element_name_7);

            exception_lineno = 268;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_name_7, tmp_args_element_name_8};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_7, call_args);
        }

        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_prep == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_30 = var_prep;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_30, mod_consts[23]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[24];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_dircall_arg3_1;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_32 = par_r;
        tmp_expression_name_31 = LOOKUP_ATTRIBUTE(tmp_expression_name_32, mod_consts[130]);
        if (tmp_expression_name_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_31, mod_consts[131]);
        Py_DECREF(tmp_expression_name_31);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (var_prep == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = var_prep;
        tmp_dircall_arg2_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_8 = impl___main__$$$function__8_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var__r == NULL);
        var__r = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT(var__r);
        tmp_expression_name_34 = var__r;
        tmp_expression_name_33 = LOOKUP_ATTRIBUTE(tmp_expression_name_34, mod_consts[132]);
        if (tmp_expression_name_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_33, mod_consts[133]);
        Py_DECREF(tmp_expression_name_33);
        if (tmp_called_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        if (par_r == NULL) {
            Py_DECREF(tmp_called_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_9 = par_r;
        frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame.f_lineno = 270;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_9);
        Py_DECREF(tmp_called_name_8);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        if (var_prep == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_4 = var_prep;
        if (var__r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = var__r;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[103], tmp_assattr_name_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (var__r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[134]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 273;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var__r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_4:;
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_expression_name_35;
        tmp_assattr_name_5 = mod_consts[69];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_35 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_35, mod_consts[29]);
        if (tmp_assattr_target_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[37], tmp_assattr_name_5);
        Py_DECREF(tmp_assattr_target_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    if (par_r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 276;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ff61aa0e87c9a6911719eba3a9228d3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_ff61aa0e87c9a6911719eba3a9228d3f);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_ff61aa0e87c9a6911719eba3a9228d3f);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ff61aa0e87c9a6911719eba3a9228d3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff61aa0e87c9a6911719eba3a9228d3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff61aa0e87c9a6911719eba3a9228d3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff61aa0e87c9a6911719eba3a9228d3f,
        type_description_1,
        par_self,
        par_r,
        par_kwargs,
        var_s_auth,
        var_pat,
        var_prep,
        var__r
    );


    // Release cached frame if used for exception.
    if (frame_ff61aa0e87c9a6911719eba3a9228d3f == cache_frame_ff61aa0e87c9a6911719eba3a9228d3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_ff61aa0e87c9a6911719eba3a9228d3f);
        cache_frame_ff61aa0e87c9a6911719eba3a9228d3f = NULL;
    }

    assertFrameObject(frame_ff61aa0e87c9a6911719eba3a9228d3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_s_auth);
    var_s_auth = NULL;
    Py_XDECREF(var_pat);
    var_pat = NULL;
    Py_XDECREF(var_prep);
    var_prep = NULL;
    Py_XDECREF(var__r);
    var__r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    par_kwargs = NULL;
    Py_XDECREF(var_s_auth);
    var_s_auth = NULL;
    Py_XDECREF(var_pat);
    var_pat = NULL;
    Py_XDECREF(var_prep);
    var_prep = NULL;
    Py_XDECREF(var__r);
    var__r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__13___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_r = python_pars[1];
    struct Nuitka_FrameObject *frame_987ea0eab9aeb49001813745b395874b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_987ea0eab9aeb49001813745b395874b = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_987ea0eab9aeb49001813745b395874b)) {
        Py_XDECREF(cache_frame_987ea0eab9aeb49001813745b395874b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_987ea0eab9aeb49001813745b395874b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_987ea0eab9aeb49001813745b395874b = MAKE_FUNCTION_FRAME(codeobj_987ea0eab9aeb49001813745b395874b, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_987ea0eab9aeb49001813745b395874b->m_type_description == NULL);
    frame_987ea0eab9aeb49001813745b395874b = cache_frame_987ea0eab9aeb49001813745b395874b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_987ea0eab9aeb49001813745b395874b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_987ea0eab9aeb49001813745b395874b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_987ea0eab9aeb49001813745b395874b->m_frame.f_lineno = 280;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[136]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_2 = par_self;
        tmp_expression_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[29]);
        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[32]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[127]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_r);
        tmp_expression_name_4 = par_r;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_4, mod_consts[128]);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_r == NULL) {
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = par_r;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[129]);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);
            Py_DECREF(tmp_args_element_name_1);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_987ea0eab9aeb49001813745b395874b->m_frame.f_lineno = 283;
        {
            PyObject *call_args[] = {tmp_args_element_name_1, tmp_args_element_name_2};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_1, call_args);
        }

        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_r == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_6, mod_consts[23]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[24];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_name_8;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_name_7 = par_r;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_7, mod_consts[104]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_987ea0eab9aeb49001813745b395874b->m_frame.f_lineno = 285;
        tmp_assattr_name_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[137]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assattr_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_name_8 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[29]);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_name_1);

            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[36], tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_name_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    GET_CURRENT_EXCEPTION(&exception_preserved_type_1, &exception_preserved_value_1, &exception_preserved_tb_1);

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_987ea0eab9aeb49001813745b395874b, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_987ea0eab9aeb49001813745b395874b, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_compexpr_left_1, tmp_compexpr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_expression_name_9;
        tmp_assattr_name_2 = Py_None;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }

        tmp_expression_name_9 = par_self;
        tmp_assattr_target_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_9, mod_consts[29]);
        if (tmp_assattr_target_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[36], tmp_assattr_name_2);
        Py_DECREF(tmp_assattr_target_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oo";
            goto try_except_handler_3;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 284;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_987ea0eab9aeb49001813745b395874b->m_frame) frame_987ea0eab9aeb49001813745b395874b->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_3;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_expression_name_11;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = par_r;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[138]);
        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = mod_consts[139];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_11 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_11, mod_consts[140]);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_2);

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_987ea0eab9aeb49001813745b395874b->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = {tmp_args_element_name_3, tmp_args_element_name_4};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_2, call_args);
        }

        Py_DECREF(tmp_called_name_2);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_expression_name_13;
        if (par_r == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_12 = par_r;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_12, mod_consts[138]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = mod_consts[139];
        if (par_self == NULL) {
            Py_DECREF(tmp_called_name_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_13 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[141]);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_987ea0eab9aeb49001813745b395874b->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = {tmp_args_element_name_5, tmp_args_element_name_6};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_3, call_args);
        }

        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_name_14;
        tmp_assattr_name_3 = mod_consts[69];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_14 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_14, mod_consts[29]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[37], tmp_assattr_name_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    if (par_r == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[25]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 296;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_r;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_987ea0eab9aeb49001813745b395874b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_987ea0eab9aeb49001813745b395874b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_987ea0eab9aeb49001813745b395874b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_987ea0eab9aeb49001813745b395874b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_987ea0eab9aeb49001813745b395874b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_987ea0eab9aeb49001813745b395874b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_987ea0eab9aeb49001813745b395874b,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame if used for exception.
    if (frame_987ea0eab9aeb49001813745b395874b == cache_frame_987ea0eab9aeb49001813745b395874b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_987ea0eab9aeb49001813745b395874b);
        cache_frame_987ea0eab9aeb49001813745b395874b = NULL;
    }

    assertFrameObject(frame_987ea0eab9aeb49001813745b395874b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    Py_XDECREF(par_r);
    par_r = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__14___eq__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_0aa38cae116cc5edc5f66a517af6db98;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0aa38cae116cc5edc5f66a517af6db98 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0aa38cae116cc5edc5f66a517af6db98)) {
        Py_XDECREF(cache_frame_0aa38cae116cc5edc5f66a517af6db98);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0aa38cae116cc5edc5f66a517af6db98 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0aa38cae116cc5edc5f66a517af6db98 = MAKE_FUNCTION_FRAME(codeobj_0aa38cae116cc5edc5f66a517af6db98, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_0aa38cae116cc5edc5f66a517af6db98->m_type_description == NULL);
    frame_0aa38cae116cc5edc5f66a517af6db98 = cache_frame_0aa38cae116cc5edc5f66a517af6db98;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_0aa38cae116cc5edc5f66a517af6db98);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_0aa38cae116cc5edc5f66a517af6db98) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_all_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT(par_self);
        tmp_expression_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[8]);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_other);
        tmp_getattr_target_1 = par_other;
        tmp_getattr_attr_1 = mod_consts[8];
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_right_1 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_1);

            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_all_arg_1 = PyList_New(2);
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_expression_name_2;
            PyObject *tmp_getattr_target_2;
            PyObject *tmp_getattr_attr_2;
            PyObject *tmp_getattr_default_2;
            PyList_SET_ITEM(tmp_all_arg_1, 0, tmp_list_element_1);
            if (par_self == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[21]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 301;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }

            tmp_expression_name_2 = par_self;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[17]);
            if (tmp_compexpr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_other);
            tmp_getattr_target_2 = par_other;
            tmp_getattr_attr_2 = mod_consts[17];
            tmp_getattr_default_2 = Py_None;
            tmp_compexpr_right_2 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
            if (tmp_compexpr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_compexpr_left_2);

                exception_lineno = 301;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
            Py_DECREF(tmp_compexpr_left_2);
            Py_DECREF(tmp_compexpr_right_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_1 = "oo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_all_arg_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_all_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_return_value = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0aa38cae116cc5edc5f66a517af6db98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_0aa38cae116cc5edc5f66a517af6db98);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_0aa38cae116cc5edc5f66a517af6db98);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0aa38cae116cc5edc5f66a517af6db98, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0aa38cae116cc5edc5f66a517af6db98->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0aa38cae116cc5edc5f66a517af6db98, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0aa38cae116cc5edc5f66a517af6db98,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_0aa38cae116cc5edc5f66a517af6db98 == cache_frame_0aa38cae116cc5edc5f66a517af6db98) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_0aa38cae116cc5edc5f66a517af6db98);
        cache_frame_0aa38cae116cc5edc5f66a517af6db98 = NULL;
    }

    assertFrameObject(frame_0aa38cae116cc5edc5f66a517af6db98);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_requests$auth$$$function__15___ne__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_other = python_pars[1];
    struct Nuitka_FrameObject *frame_c1cd800cdbc65c05ff3ac6e09f276cc8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8)) {
        Py_XDECREF(cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8 = MAKE_FUNCTION_FRAME(codeobj_c1cd800cdbc65c05ff3ac6e09f276cc8, module_requests$auth, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8->m_type_description == NULL);
    frame_c1cd800cdbc65c05ff3ac6e09f276cc8 = cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c1cd800cdbc65c05ff3ac6e09f276cc8);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c1cd800cdbc65c05ff3ac6e09f276cc8) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(par_self);
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT(par_other);
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_operand_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        Py_DECREF(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res == 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1cd800cdbc65c05ff3ac6e09f276cc8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1cd800cdbc65c05ff3ac6e09f276cc8);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c1cd800cdbc65c05ff3ac6e09f276cc8);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1cd800cdbc65c05ff3ac6e09f276cc8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1cd800cdbc65c05ff3ac6e09f276cc8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1cd800cdbc65c05ff3ac6e09f276cc8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c1cd800cdbc65c05ff3ac6e09f276cc8,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame if used for exception.
    if (frame_c1cd800cdbc65c05ff3ac6e09f276cc8 == cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8);
        cache_frame_c1cd800cdbc65c05ff3ac6e09f276cc8 = NULL;
    }

    assertFrameObject(frame_c1cd800cdbc65c05ff3ac6e09f276cc8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    par_self = NULL;
    CHECK_OBJECT(par_other);
    Py_DECREF(par_other);
    par_other = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__10_build_digest_header,
        mod_consts[127],
#if PYTHON_VERSION >= 0x300
        mod_consts[195],
#endif
        codeobj_ecccd0c59596affd86cab671cca07322,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        mod_consts[94],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__1_md5_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__10_build_digest_header$$$function__1_md5_utf8,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[48],
#endif
        codeobj_2cbc308d3dfb4b236827c961e1d8c4d3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__2_sha_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__10_build_digest_header$$$function__2_sha_utf8,
        mod_consts[50],
#if PYTHON_VERSION >= 0x300
        mod_consts[51],
#endif
        codeobj_81916ceb84da4e01757b1b858df0d5cd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__3_sha256_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__10_build_digest_header$$$function__3_sha256_utf8,
        mod_consts[53],
#if PYTHON_VERSION >= 0x300
        mod_consts[54],
#endif
        codeobj_1b09c0b567dba178146dab36bb9d41e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__4_sha512_utf8() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__10_build_digest_header$$$function__4_sha512_utf8,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_0ca6bcd48aa6fee5df7a5ca492c1d80e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header$$$function__5_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__10_build_digest_header$$$function__5_lambda,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_0236bc125298a21e45125b82b38c984a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__11_handle_redirect() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__11_handle_redirect,
        mod_consts[141],
#if PYTHON_VERSION >= 0x300
        mod_consts[196],
#endif
        codeobj_96eaaef85fdd6be5191e9d82ffac1304,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        mod_consts[99],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__12_handle_401() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__12_handle_401,
        mod_consts[140],
#if PYTHON_VERSION >= 0x300
        mod_consts[197],
#endif
        codeobj_ff61aa0e87c9a6911719eba3a9228d3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        mod_consts[135],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__13___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__13___call__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[198],
#endif
        codeobj_987ea0eab9aeb49001813745b395874b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__14___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__14___eq__,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[199],
#endif
        codeobj_0aa38cae116cc5edc5f66a517af6db98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__15___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__15___ne__,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[200],
#endif
        codeobj_c1cd800cdbc65c05ff3ac6e09f276cc8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__1__basic_auth_str() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__1__basic_auth_str,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_db119b69d9852ae035f9e438e7d89bfd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__2___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__2___call__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_f2506b4095b80054de4b9deed77ce7fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__3___init__,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[182],
#endif
        codeobj_80f03cc744f04a3eed22f313834df17e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__4___eq__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__4___eq__,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_c89eb68ecc981e8b224880bc9175c9df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__5___ne__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__5___ne__,
        mod_consts[185],
#if PYTHON_VERSION >= 0x300
        mod_consts[186],
#endif
        codeobj_5630a3c10d38d8bbc32a21da99fbca97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__6___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__6___call__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[187],
#endif
        codeobj_3118f28834f1366a564ff417d1494ae8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__7___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__7___call__,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[190],
#endif
        codeobj_c6e43a046a9e1ecd4cb6fb73f485f478,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__8___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__8___init__,
        mod_consts[181],
#if PYTHON_VERSION >= 0x300
        mod_consts[193],
#endif
        codeobj_f7a993c1cdb66c23a8ac4e8722b4980f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function__9_init_per_thread_state() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function__9_init_per_thread_state,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[194],
#endif
        codeobj_a02b79e01a04dab442ff1cbd9c9fdbee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_requests$auth[] = {
    impl_requests$auth$$$function__10_build_digest_header$$$function__1_md5_utf8,
    impl_requests$auth$$$function__10_build_digest_header$$$function__2_sha_utf8,
    impl_requests$auth$$$function__10_build_digest_header$$$function__3_sha256_utf8,
    impl_requests$auth$$$function__10_build_digest_header$$$function__4_sha512_utf8,
    impl_requests$auth$$$function__10_build_digest_header$$$function__5_lambda,
    impl_requests$auth$$$function__1__basic_auth_str,
    impl_requests$auth$$$function__2___call__,
    impl_requests$auth$$$function__3___init__,
    impl_requests$auth$$$function__4___eq__,
    impl_requests$auth$$$function__5___ne__,
    impl_requests$auth$$$function__6___call__,
    impl_requests$auth$$$function__7___call__,
    impl_requests$auth$$$function__8___init__,
    impl_requests$auth$$$function__9_init_per_thread_state,
    impl_requests$auth$$$function__10_build_digest_header,
    impl_requests$auth$$$function__11_handle_redirect,
    impl_requests$auth$$$function__12_handle_401,
    impl_requests$auth$$$function__13___call__,
    impl_requests$auth$$$function__14___eq__,
    impl_requests$auth$$$function__15___ne__,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_requests$auth;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = PyTuple_New(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = PyTuple_New(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_requests$auth) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODEOBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_requests$auth[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_requests$auth,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_requests$auth(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_requests$auth = module;

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();

#if PYTHON_VERSION < 0x300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 0x270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.auth: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.auth: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("requests.auth: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initrequests$auth\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_requests$auth = MODULE_DICT(module_requests$auth);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_requests$auth,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_requests$auth);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_requests$auth);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_64cd521fc74e2ee103f12a0128242ce5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *locals_requests$auth$$$class__1_AuthBase_72 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_13cb67ac4ae543160fcf714741fce22f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_13cb67ac4ae543160fcf714741fce22f_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_requests$auth$$$class__2_HTTPBasicAuth_79 = NULL;
    struct Nuitka_FrameObject *frame_43491eaaa8a2476d6bd5eb0ffc173493_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *locals_requests$auth$$$class__3_HTTPProxyAuth_100 = NULL;
    struct Nuitka_FrameObject *frame_a16ca483391246a7ece44d087c9f7dd2_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    static struct Nuitka_FrameObject *cache_frame_a16ca483391246a7ece44d087c9f7dd2_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *locals_requests$auth$$$class__4_HTTPDigestAuth_108 = NULL;
    struct Nuitka_FrameObject *frame_6c55f870a813f2162732999a0535564e_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    static struct Nuitka_FrameObject *cache_frame_6c55f870a813f2162732999a0535564e_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[144];
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_64cd521fc74e2ee103f12a0128242ce5 = MAKE_MODULE_FRAME(codeobj_64cd521fc74e2ee103f12a0128242ce5, module_requests$auth);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_64cd521fc74e2ee103f12a0128242ce5);
    assert(Py_REFCNT(frame_64cd521fc74e2ee103f12a0128242ce5) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[144];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[147], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[148], tmp_assattr_name_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[110];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[33];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[72];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[33];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[77];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[33];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 13;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[27];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = mod_consts[33];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 14;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_arg_name_5;
        PyObject *tmp_locals_arg_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = mod_consts[1];
        tmp_globals_arg_name_5 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        tmp_level_name_5 = mod_consts[33];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 15;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_name_5, tmp_globals_arg_name_5, tmp_locals_arg_name_5, tmp_fromlist_name_5, tmp_level_name_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_arg_name_6;
        PyObject *tmp_locals_arg_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = mod_consts[150];
        tmp_globals_arg_name_6 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_6 = Py_None;
        tmp_fromlist_name_6 = mod_consts[151];
        tmp_level_name_6 = mod_consts[33];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 17;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_6, tmp_globals_arg_name_6, tmp_locals_arg_name_6, tmp_fromlist_name_6, tmp_level_name_6);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_requests$auth,
                mod_consts[14],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[14]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_arg_name_7;
        PyObject *tmp_locals_arg_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = mod_consts[152];
        tmp_globals_arg_name_7 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_7 = Py_None;
        tmp_fromlist_name_7 = mod_consts[153];
        tmp_level_name_7 = mod_consts[69];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 19;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_name_7, tmp_globals_arg_name_7, tmp_locals_arg_name_7, tmp_fromlist_name_7, tmp_level_name_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_requests$auth,
                mod_consts[61],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[61]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_requests$auth,
                mod_consts[7],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[7]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_requests$auth,
                mod_consts[0],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[0]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_14);
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_arg_name_8;
        PyObject *tmp_locals_arg_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = mod_consts[154];
        tmp_globals_arg_name_8 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_8 = Py_None;
        tmp_fromlist_name_8 = mod_consts[155];
        tmp_level_name_8 = mod_consts[69];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 20;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_name_8, tmp_globals_arg_name_8, tmp_locals_arg_name_8, tmp_fromlist_name_8, tmp_level_name_8);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_requests$auth,
                mod_consts[122],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[122]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_arg_name_9;
        PyObject *tmp_locals_arg_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = mod_consts[156];
        tmp_globals_arg_name_9 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_9 = Py_None;
        tmp_fromlist_name_9 = mod_consts[157];
        tmp_level_name_9 = mod_consts[69];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 21;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_name_9, tmp_globals_arg_name_9, tmp_locals_arg_name_9, tmp_fromlist_name_9, tmp_level_name_9);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_requests$auth,
                mod_consts[13],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_arg_name_10;
        PyObject *tmp_locals_arg_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = mod_consts[158];
        tmp_globals_arg_name_10 = (PyObject *)moduledict_requests$auth;
        tmp_locals_arg_name_10 = Py_None;
        tmp_fromlist_name_10 = mod_consts[159];
        tmp_level_name_10 = mod_consts[69];
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 22;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_name_10, tmp_globals_arg_name_10, tmp_locals_arg_name_10, tmp_fromlist_name_10, tmp_level_name_10);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_requests$auth,
                mod_consts[115],
                mod_consts[33]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[115]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = mod_consts[160];
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[162];
        UPDATE_STRING_DICT0(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_requests$auth$$$function__1__basic_auth_str();

        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_20);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[164];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_21 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = PyDict_New();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_metaclass_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_arg_name_1;
        PyObject *tmp_dict_arg_name_2;
        PyObject *tmp_key_name_2;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_bases_name_1;
        tmp_key_name_1 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_1 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_1, tmp_key_name_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_2 = tmp_class_creation_1__class_decl_dict;
        tmp_key_name_2 = mod_consts[165];
        tmp_metaclass_name_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_2, tmp_key_name_2);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_name_1 = tmp_class_creation_1__bases;
        tmp_subscript_name_1 = mod_consts[33];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_1, tmp_subscript_name_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        tmp_metaclass_name_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_1);
        condexpr_end_2:;
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_name_1 = tmp_class_creation_1__bases;
        tmp_assign_source_23 = SELECT_METACLASS(tmp_metaclass_name_1, tmp_bases_name_1);
        Py_DECREF(tmp_metaclass_name_1);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_23;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_arg_name_3;
        tmp_key_name_3 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_dict_arg_name_3 = tmp_class_creation_1__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_3, tmp_key_name_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;
    tmp_dictdel_key = mod_consts[165];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 72;

        goto try_except_handler_2;
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_name_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_2, mod_consts[166]);
        tmp_condition_result_4 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_name_3 = tmp_class_creation_1__metaclass;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[166]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[167];
        tmp_args_name_1 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_name_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_name_1 = tmp_class_creation_1__class_decl_dict;
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 72;
        tmp_assign_source_24 = CALL_FUNCTION(tmp_called_name_1, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_name_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_expression_name_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_name_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_4, mod_consts[168]);
        tmp_operand_name_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_left_name_1 = mod_consts[169];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[170];
        tmp_getattr_default_1 = mod_consts[171];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        tmp_right_name_1 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_right_name_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_name_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_name_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_name_5, mod_consts[170]);
            Py_DECREF(tmp_expression_name_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_right_name_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_right_name_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 72;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = PyDict_New();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_25;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_requests$auth$$$class__1_AuthBase_72 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__1_AuthBase_72, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__1_AuthBase_72, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[167];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__1_AuthBase_72, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_13cb67ac4ae543160fcf714741fce22f_2)) {
            Py_XDECREF(cache_frame_13cb67ac4ae543160fcf714741fce22f_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_13cb67ac4ae543160fcf714741fce22f_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_13cb67ac4ae543160fcf714741fce22f_2 = MAKE_FUNCTION_FRAME(codeobj_13cb67ac4ae543160fcf714741fce22f, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_13cb67ac4ae543160fcf714741fce22f_2->m_type_description == NULL);
        frame_13cb67ac4ae543160fcf714741fce22f_2 = cache_frame_13cb67ac4ae543160fcf714741fce22f_2;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_13cb67ac4ae543160fcf714741fce22f_2);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_13cb67ac4ae543160fcf714741fce22f_2) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__2___call__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__1_AuthBase_72, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_13cb67ac4ae543160fcf714741fce22f_2);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_13cb67ac4ae543160fcf714741fce22f_2);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_13cb67ac4ae543160fcf714741fce22f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_13cb67ac4ae543160fcf714741fce22f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_13cb67ac4ae543160fcf714741fce22f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_13cb67ac4ae543160fcf714741fce22f_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_13cb67ac4ae543160fcf714741fce22f_2 == cache_frame_13cb67ac4ae543160fcf714741fce22f_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_13cb67ac4ae543160fcf714741fce22f_2);
            cache_frame_13cb67ac4ae543160fcf714741fce22f_2 = NULL;
        }

        assertFrameObject(frame_13cb67ac4ae543160fcf714741fce22f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_compexpr_left_1 = tmp_class_creation_1__bases;
            tmp_compexpr_right_1 = mod_consts[164];
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_1, tmp_compexpr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
            assert(tmp_condition_result_6 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_4:;
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__1_AuthBase_72, mod_consts[178], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto try_except_handler_4;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_name_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_name_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[167];
            tmp_args_name_2 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_name_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_requests$auth$$$class__1_AuthBase_72;
            PyTuple_SET_ITEM0(tmp_args_name_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_name_2 = tmp_class_creation_1__class_decl_dict;
            frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 72;
            tmp_assign_source_27 = CALL_FUNCTION(tmp_called_name_2, tmp_args_name_2, tmp_kwargs_name_2);
            Py_DECREF(tmp_args_name_2);
            if (tmp_assign_source_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_27;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_26 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_26);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_requests$auth$$$class__1_AuthBase_72);
        locals_requests$auth$$$class__1_AuthBase_72 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$auth$$$class__1_AuthBase_72);
        locals_requests$auth$$$class__1_AuthBase_72 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 72;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_26);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_assign_source_28 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_28, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_29 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        tmp_assign_source_30 = PyDict_New();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_metaclass_name_2;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_4;
        PyObject *tmp_dict_arg_name_4;
        PyObject *tmp_dict_arg_name_5;
        PyObject *tmp_key_name_5;
        nuitka_bool tmp_condition_result_8;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_bases_name_2;
        tmp_key_name_4 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_4 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_4, tmp_key_name_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_5 = tmp_class_creation_2__class_decl_dict;
        tmp_key_name_5 = mod_consts[165];
        tmp_metaclass_name_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_5, tmp_key_name_5);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_condition_result_8 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_name_6 = tmp_class_creation_2__bases;
        tmp_subscript_name_2 = mod_consts[33];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_6, tmp_subscript_name_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_metaclass_name_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_name_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_2);
        condexpr_end_4:;
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_name_2 = tmp_class_creation_2__bases;
        tmp_assign_source_31 = SELECT_METACLASS(tmp_metaclass_name_2, tmp_bases_name_2);
        Py_DECREF(tmp_metaclass_name_2);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_31;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_key_name_6;
        PyObject *tmp_dict_arg_name_6;
        tmp_key_name_6 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_dict_arg_name_6 = tmp_class_creation_2__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_6, tmp_key_name_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;
    tmp_dictdel_key = mod_consts[165];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 79;

        goto try_except_handler_5;
    }
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_name_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_7, mod_consts[166]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_args_name_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_name_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_name_8 = tmp_class_creation_2__metaclass;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_8, mod_consts[166]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = mod_consts[179];
        tmp_args_name_3 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_name_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_name_3 = tmp_class_creation_2__class_decl_dict;
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 79;
        tmp_assign_source_32 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_3, tmp_kwargs_name_3);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_3);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_expression_name_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_name_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_9, mod_consts[168]);
        tmp_operand_name_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_left_name_2 = mod_consts[169];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[170];
        tmp_getattr_default_2 = mod_consts[171];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        tmp_right_name_2 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_right_name_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_name_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_name_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_name_10, mod_consts[170]);
            Py_DECREF(tmp_expression_name_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_right_name_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_right_name_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_right_name_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 79;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = PyDict_New();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_33;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_34;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_requests$auth$$$class__2_HTTPBasicAuth_79 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[180];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[179];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        if (isFrameUnusable(cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3)) {
            Py_XDECREF(cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3 = MAKE_FUNCTION_FRAME(codeobj_43491eaaa8a2476d6bd5eb0ffc173493, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3->m_type_description == NULL);
        frame_43491eaaa8a2476d6bd5eb0ffc173493_3 = cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_43491eaaa8a2476d6bd5eb0ffc173493_3);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_43491eaaa8a2476d6bd5eb0ffc173493_3) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[181], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__4___eq__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__5___ne__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__6___call__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_43491eaaa8a2476d6bd5eb0ffc173493_3);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_43491eaaa8a2476d6bd5eb0ffc173493_3);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_43491eaaa8a2476d6bd5eb0ffc173493_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_43491eaaa8a2476d6bd5eb0ffc173493_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_43491eaaa8a2476d6bd5eb0ffc173493_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_43491eaaa8a2476d6bd5eb0ffc173493_3,
            type_description_2,
            outline_1_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_43491eaaa8a2476d6bd5eb0ffc173493_3 == cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3);
            cache_frame_43491eaaa8a2476d6bd5eb0ffc173493_3 = NULL;
        }

        assertFrameObject(frame_43491eaaa8a2476d6bd5eb0ffc173493_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_7;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_compexpr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_compexpr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_2, tmp_compexpr_right_2);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_7;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_8;
            } else {
                goto branch_no_8;
            }
            assert(tmp_condition_result_12 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_8:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__2_HTTPBasicAuth_79, mod_consts[178], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;

            goto try_except_handler_7;
        }
        branch_no_8:;
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_name_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_name_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[179];
            tmp_args_name_4 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_name_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_requests$auth$$$class__2_HTTPBasicAuth_79;
            PyTuple_SET_ITEM0(tmp_args_name_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_name_4 = tmp_class_creation_2__class_decl_dict;
            frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 79;
            tmp_assign_source_35 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_4, tmp_kwargs_name_4);
            Py_DECREF(tmp_args_name_4);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_35;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_34 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_requests$auth$$$class__2_HTTPBasicAuth_79);
        locals_requests$auth$$$class__2_HTTPBasicAuth_79 = NULL;
        goto try_return_handler_6;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$auth$$$class__2_HTTPBasicAuth_79);
        locals_requests$auth$$$class__2_HTTPBasicAuth_79 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 79;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_34);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_tuple_element_8;
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_assign_source_36 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_36, 0, tmp_tuple_element_8);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_37 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = PyDict_New();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_metaclass_name_3;
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_arg_name_7;
        PyObject *tmp_dict_arg_name_8;
        PyObject *tmp_key_name_8;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_3;
        PyObject *tmp_bases_name_3;
        tmp_key_name_7 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_7 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_7, tmp_key_name_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_8 = tmp_class_creation_3__class_decl_dict;
        tmp_key_name_8 = mod_consts[165];
        tmp_metaclass_name_3 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_8, tmp_key_name_8);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_condition_result_14 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_6;
        } else {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_name_11 = tmp_class_creation_3__bases;
        tmp_subscript_name_3 = mod_consts[33];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_11, tmp_subscript_name_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_metaclass_name_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        tmp_metaclass_name_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_3);
        condexpr_end_6:;
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_name_3 = tmp_class_creation_3__bases;
        tmp_assign_source_39 = SELECT_METACLASS(tmp_metaclass_name_3, tmp_bases_name_3);
        Py_DECREF(tmp_metaclass_name_3);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_39;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_arg_name_9;
        tmp_key_name_9 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_dict_arg_name_9 = tmp_class_creation_3__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_9, tmp_key_name_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;
    tmp_dictdel_key = mod_consts[165];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 100;

        goto try_except_handler_8;
    }
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_expression_name_12;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_12 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_12, mod_consts[166]);
        tmp_condition_result_16 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_name_5;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_args_name_5;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_kwargs_name_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_name_13 = tmp_class_creation_3__metaclass;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE(tmp_expression_name_13, mod_consts[166]);
        if (tmp_called_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_tuple_element_9 = mod_consts[188];
        tmp_args_name_5 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_5, 0, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_9 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_name_5, 1, tmp_tuple_element_9);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_name_5 = tmp_class_creation_3__class_decl_dict;
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 100;
        tmp_assign_source_40 = CALL_FUNCTION(tmp_called_name_5, tmp_args_name_5, tmp_kwargs_name_5);
        Py_DECREF(tmp_called_name_5);
        Py_DECREF(tmp_args_name_5);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_40;
    }
    {
        nuitka_bool tmp_condition_result_17;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_expression_name_14;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_name_14 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_14, mod_consts[168]);
        tmp_operand_name_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_condition_result_17 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_left_name_3 = mod_consts[169];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[170];
        tmp_getattr_default_3 = mod_consts[171];
        tmp_tuple_element_10 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_right_name_3 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_15;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_right_name_3, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_name_15 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_name_15 == NULL));
            tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_15, mod_consts[170]);
            Py_DECREF(tmp_expression_name_15);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_right_name_3, 1, tmp_tuple_element_10);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_right_name_3);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = PyDict_New();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_41;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_42;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_requests$auth$$$class__3_HTTPProxyAuth_100 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_100, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[189];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_100, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[188];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_100, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        if (isFrameUnusable(cache_frame_a16ca483391246a7ece44d087c9f7dd2_4)) {
            Py_XDECREF(cache_frame_a16ca483391246a7ece44d087c9f7dd2_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a16ca483391246a7ece44d087c9f7dd2_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a16ca483391246a7ece44d087c9f7dd2_4 = MAKE_FUNCTION_FRAME(codeobj_a16ca483391246a7ece44d087c9f7dd2, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_a16ca483391246a7ece44d087c9f7dd2_4->m_type_description == NULL);
        frame_a16ca483391246a7ece44d087c9f7dd2_4 = cache_frame_a16ca483391246a7ece44d087c9f7dd2_4;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_a16ca483391246a7ece44d087c9f7dd2_4);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_a16ca483391246a7ece44d087c9f7dd2_4) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__7___call__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_100, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_2 = "o";
            goto frame_exception_exit_4;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a16ca483391246a7ece44d087c9f7dd2_4);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;

        frame_exception_exit_4:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_a16ca483391246a7ece44d087c9f7dd2_4);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a16ca483391246a7ece44d087c9f7dd2_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a16ca483391246a7ece44d087c9f7dd2_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a16ca483391246a7ece44d087c9f7dd2_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a16ca483391246a7ece44d087c9f7dd2_4,
            type_description_2,
            outline_2_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_a16ca483391246a7ece44d087c9f7dd2_4 == cache_frame_a16ca483391246a7ece44d087c9f7dd2_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_a16ca483391246a7ece44d087c9f7dd2_4);
            cache_frame_a16ca483391246a7ece44d087c9f7dd2_4 = NULL;
        }

        assertFrameObject(frame_a16ca483391246a7ece44d087c9f7dd2_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;

        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_10;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_18;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_compexpr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_compexpr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_18 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_3, tmp_compexpr_right_3);
            if (tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
            assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__3_HTTPProxyAuth_100, mod_consts[178], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_10;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_43;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_name_6;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_kwargs_name_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_name_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_11 = mod_consts[188];
            tmp_args_name_6 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_6, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_11 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_name_6, 1, tmp_tuple_element_11);
            tmp_tuple_element_11 = locals_requests$auth$$$class__3_HTTPProxyAuth_100;
            PyTuple_SET_ITEM0(tmp_args_name_6, 2, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_name_6 = tmp_class_creation_3__class_decl_dict;
            frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 100;
            tmp_assign_source_43 = CALL_FUNCTION(tmp_called_name_6, tmp_args_name_6, tmp_kwargs_name_6);
            Py_DECREF(tmp_args_name_6);
            if (tmp_assign_source_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_43;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_42 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_42);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_requests$auth$$$class__3_HTTPProxyAuth_100);
        locals_requests$auth$$$class__3_HTTPProxyAuth_100 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$auth$$$class__3_HTTPProxyAuth_100);
        locals_requests$auth$$$class__3_HTTPProxyAuth_100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 100;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[188], tmp_assign_source_42);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_tuple_element_12;
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[167]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[167]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_assign_source_44 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_assign_source_44, 0, tmp_tuple_element_12);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_45 = impl___main__$$$function__4__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_New();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_metaclass_name_4;
        nuitka_bool tmp_condition_result_19;
        PyObject *tmp_key_name_10;
        PyObject *tmp_dict_arg_name_10;
        PyObject *tmp_dict_arg_name_11;
        PyObject *tmp_key_name_11;
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_subscript_name_4;
        PyObject *tmp_bases_name_4;
        tmp_key_name_10 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_10 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_10, tmp_key_name_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_19 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_7;
        } else {
            goto condexpr_false_7;
        }
        condexpr_true_7:;
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_11 = tmp_class_creation_4__class_decl_dict;
        tmp_key_name_11 = mod_consts[165];
        tmp_metaclass_name_4 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_name_11, tmp_key_name_11);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        goto condexpr_end_7;
        condexpr_false_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_condition_result_20 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_8;
        } else {
            goto condexpr_false_8;
        }
        condexpr_true_8:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_name_16 = tmp_class_creation_4__bases;
        tmp_subscript_name_4 = mod_consts[33];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_name_16, tmp_subscript_name_4, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_metaclass_name_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        goto condexpr_end_8;
        condexpr_false_8:;
        tmp_metaclass_name_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_name_4);
        condexpr_end_8:;
        condexpr_end_7:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_name_4 = tmp_class_creation_4__bases;
        tmp_assign_source_47 = SELECT_METACLASS(tmp_metaclass_name_4, tmp_bases_name_4);
        Py_DECREF(tmp_metaclass_name_4);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_47;
    }
    {
        nuitka_bool tmp_condition_result_21;
        PyObject *tmp_key_name_12;
        PyObject *tmp_dict_arg_name_12;
        tmp_key_name_12 = mod_consts[165];
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_dict_arg_name_12 = tmp_class_creation_4__class_decl_dict;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_name_12, tmp_key_name_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_21 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;
    tmp_dictdel_key = mod_consts[165];
    tmp_result = DICT_REMOVE_ITEM(tmp_dictdel_dict, tmp_dictdel_key);
    if (tmp_result == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 108;

        goto try_except_handler_11;
    }
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_name_17;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_17 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_17, mod_consts[166]);
        tmp_condition_result_22 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_7;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_args_name_7;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_kwargs_name_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_name_18 = tmp_class_creation_4__metaclass;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE(tmp_expression_name_18, mod_consts[166]);
        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_tuple_element_13 = mod_consts[191];
        tmp_args_name_7 = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_args_name_7, 0, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_13 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_name_7, 1, tmp_tuple_element_13);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_name_7 = tmp_class_creation_4__class_decl_dict;
        frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 108;
        tmp_assign_source_48 = CALL_FUNCTION(tmp_called_name_7, tmp_args_name_7, tmp_kwargs_name_7);
        Py_DECREF(tmp_called_name_7);
        Py_DECREF(tmp_args_name_7);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_48;
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_operand_name_4;
        PyObject *tmp_expression_name_19;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_name_19 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_name_19, mod_consts[168]);
        tmp_operand_name_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_condition_result_23 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_14;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_left_name_4 = mod_consts[169];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[170];
        tmp_getattr_default_4 = mod_consts[171];
        tmp_tuple_element_14 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        tmp_right_name_4 = PyTuple_New(2);
        {
            PyObject *tmp_expression_name_20;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_right_name_4, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_name_20 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_name_20 == NULL));
            tmp_tuple_element_14 = LOOKUP_ATTRIBUTE(tmp_expression_name_20, mod_consts[170]);
            Py_DECREF(tmp_expression_name_20);
            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_right_name_4, 1, tmp_tuple_element_14);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_right_name_4);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 108;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_15:;
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = PyDict_New();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    branch_end_14:;
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_requests$auth$$$class__4_HTTPDigestAuth_108 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[172];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[173], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[191];
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[175], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        if (isFrameUnusable(cache_frame_6c55f870a813f2162732999a0535564e_5)) {
            Py_XDECREF(cache_frame_6c55f870a813f2162732999a0535564e_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_6c55f870a813f2162732999a0535564e_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_6c55f870a813f2162732999a0535564e_5 = MAKE_FUNCTION_FRAME(codeobj_6c55f870a813f2162732999a0535564e, module_requests$auth, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }
        assert(cache_frame_6c55f870a813f2162732999a0535564e_5->m_type_description == NULL);
        frame_6c55f870a813f2162732999a0535564e_5 = cache_frame_6c55f870a813f2162732999a0535564e_5;

        // Push the new frame as the currently active one.
        pushFrameStack(frame_6c55f870a813f2162732999a0535564e_5);

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert(Py_REFCNT(frame_6c55f870a813f2162732999a0535564e_5) == 2); // Frame stack

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__8___init__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[181], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__9_init_per_thread_state();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[136], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__10_build_digest_header();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[127], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__11_handle_redirect();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[141], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__12_handle_401();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[140], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__13___call__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__14___eq__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[183], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }


        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function__15___ne__();

        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[185], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_2 = "o";
            goto frame_exception_exit_5;
        }

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c55f870a813f2162732999a0535564e_5);
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;

        frame_exception_exit_5:;

#if 0
        RESTORE_FRAME_EXCEPTION(frame_6c55f870a813f2162732999a0535564e_5);
#endif

        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6c55f870a813f2162732999a0535564e_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6c55f870a813f2162732999a0535564e_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6c55f870a813f2162732999a0535564e_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6c55f870a813f2162732999a0535564e_5,
            type_description_2,
            outline_3_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_6c55f870a813f2162732999a0535564e_5 == cache_frame_6c55f870a813f2162732999a0535564e_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_frame_6c55f870a813f2162732999a0535564e_5);
            cache_frame_6c55f870a813f2162732999a0535564e_5 = NULL;
        }

        assertFrameObject(frame_6c55f870a813f2162732999a0535564e_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;

        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_13;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_24;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_compexpr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_compexpr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_24 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_compexpr_left_4, tmp_compexpr_right_4);
            if (tmp_condition_result_24 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
                goto branch_yes_16;
            } else {
                goto branch_no_16;
            }
            assert(tmp_condition_result_24 != NUITKA_BOOL_UNASSIGNED);
        }
        branch_yes_16:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_requests$auth$$$class__4_HTTPDigestAuth_108, mod_consts[178], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;

            goto try_except_handler_13;
        }
        branch_no_16:;
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_name_8;
            PyObject *tmp_args_name_8;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_name_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_name_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_15 = mod_consts[191];
            tmp_args_name_8 = PyTuple_New(3);
            PyTuple_SET_ITEM0(tmp_args_name_8, 0, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_15 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_name_8, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_requests$auth$$$class__4_HTTPDigestAuth_108;
            PyTuple_SET_ITEM0(tmp_args_name_8, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_name_8 = tmp_class_creation_4__class_decl_dict;
            frame_64cd521fc74e2ee103f12a0128242ce5->m_frame.f_lineno = 108;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_name_8, tmp_args_name_8, tmp_kwargs_name_8);
            Py_DECREF(tmp_args_name_8);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_50 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_requests$auth$$$class__4_HTTPDigestAuth_108);
        locals_requests$auth$$$class__4_HTTPDigestAuth_108 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_requests$auth$$$class__4_HTTPDigestAuth_108);
        locals_requests$auth$$$class__4_HTTPDigestAuth_108 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 108;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_requests$auth, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_50);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_64cd521fc74e2ee103f12a0128242ce5);
#endif
    popFrameStack();

    assertFrameObject(frame_64cd521fc74e2ee103f12a0128242ce5);

    goto frame_no_exception_5;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_64cd521fc74e2ee103f12a0128242ce5);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_64cd521fc74e2ee103f12a0128242ce5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_64cd521fc74e2ee103f12a0128242ce5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_64cd521fc74e2ee103f12a0128242ce5, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    return module_requests$auth;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

