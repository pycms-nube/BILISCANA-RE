/* Generated code for Python module 'api_commit_get'
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

/* The "module_api_commit_get" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_api_commit_get;
PyDictObject *moduledict_api_commit_get;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[228];

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("api_commit_get"));
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
void checkModuleConstants_api_commit_get(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    checkConstantsBlob(&mod_consts[0], "api_commit_get");
}
#endif

// The module code objects.
static PyCodeObject *codeobj_6002f8737681473995a6868b06544350;
static PyCodeObject *codeobj_bf1283372902174afa8fadb130e17256;
static PyCodeObject *codeobj_3255088c1f31dd297e8d983c3d9df6e4;
static PyCodeObject *codeobj_abb6819ce1e4c179978cb28954e52abc;
static PyCodeObject *codeobj_758485e474914a938407d2a5a7433807;
static PyCodeObject *codeobj_b87b9482fbf3193b44cb322b84d87dea;
static PyCodeObject *codeobj_c66613e2115840072bebde549c83d5f2;
static PyCodeObject *codeobj_d7acd605691a0a304d6278f461994bfc;
static PyCodeObject *codeobj_9fc98e0e58c44d43579ddf02e543dd2b;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[208]; CHECK_OBJECT(module_filename_obj);
    codeobj_6002f8737681473995a6868b06544350 = MAKE_CODEOBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[219], NULL, NULL, 0, 0, 0);
    codeobj_bf1283372902174afa8fadb130e17256 = MAKE_CODEOBJECT(module_filename_obj, 180, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[91], mod_consts[220], NULL, 22, 0, 0);
    codeobj_3255088c1f31dd297e8d983c3d9df6e4 = MAKE_CODEOBJECT(module_filename_obj, 526, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[218], mod_consts[221], NULL, 14, 0, 0);
    codeobj_abb6819ce1e4c179978cb28954e52abc = MAKE_CODEOBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[214], mod_consts[222], NULL, 1, 0, 0);
    codeobj_758485e474914a938407d2a5a7433807 = MAKE_CODEOBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[223], NULL, 4, 0, 0);
    codeobj_b87b9482fbf3193b44cb322b84d87dea = MAKE_CODEOBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[224], NULL, 0, 0, 0);
    codeobj_c66613e2115840072bebde549c83d5f2 = MAKE_CODEOBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[215], mod_consts[225], NULL, 0, 0, 0);
    codeobj_d7acd605691a0a304d6278f461994bfc = MAKE_CODEOBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[226], NULL, 14, 0, 0);
    codeobj_9fc98e0e58c44d43579ddf02e543dd2b = MAKE_CODEOBJECT(module_filename_obj, 33, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[216], mod_consts[227], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_api_commit_get$$$function__1_get_proxy();


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__2_delete_proxy();


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__3_init();


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__4_video_info();


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__5_detect_replies();


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__6_reply_get_online();


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__7_commit_info(PyObject *defaults);


static PyObject *MAKE_FUNCTION_api_commit_get$$$function__8_commit_json_ana();


// The module function definitions.
static PyObject *impl_api_commit_get$$$function__1_get_proxy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_a = NULL;
    struct Nuitka_FrameObject *frame_b87b9482fbf3193b44cb322b84d87dea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b87b9482fbf3193b44cb322b84d87dea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b87b9482fbf3193b44cb322b84d87dea)) {
        Py_XDECREF(cache_frame_b87b9482fbf3193b44cb322b84d87dea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b87b9482fbf3193b44cb322b84d87dea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b87b9482fbf3193b44cb322b84d87dea = MAKE_FUNCTION_FRAME(codeobj_b87b9482fbf3193b44cb322b84d87dea, module_api_commit_get, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_b87b9482fbf3193b44cb322b84d87dea->m_type_description == NULL);
    frame_b87b9482fbf3193b44cb322b84d87dea = cache_frame_b87b9482fbf3193b44cb322b84d87dea;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_b87b9482fbf3193b44cb322b84d87dea);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_b87b9482fbf3193b44cb322b84d87dea) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b87b9482fbf3193b44cb322b84d87dea->m_frame.f_lineno = 14;
        tmp_expression_name_1 = CALL_METHOD_WITH_ARGS1(
            tmp_called_instance_2,
            mod_consts[1],
            &PyTuple_GET_ITEM(mod_consts[2], 0)
        );

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[3]);
        Py_DECREF(tmp_expression_name_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b87b9482fbf3193b44cb322b84d87dea->m_frame.f_lineno = 14;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_a == NULL);
        var_a = tmp_assign_source_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b87b9482fbf3193b44cb322b84d87dea);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_b87b9482fbf3193b44cb322b84d87dea);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b87b9482fbf3193b44cb322b84d87dea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b87b9482fbf3193b44cb322b84d87dea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b87b9482fbf3193b44cb322b84d87dea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b87b9482fbf3193b44cb322b84d87dea,
        type_description_1,
        var_a
    );


    // Release cached frame if used for exception.
    if (frame_b87b9482fbf3193b44cb322b84d87dea == cache_frame_b87b9482fbf3193b44cb322b84d87dea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_b87b9482fbf3193b44cb322b84d87dea);
        cache_frame_b87b9482fbf3193b44cb322b84d87dea = NULL;
    }

    assertFrameObject(frame_b87b9482fbf3193b44cb322b84d87dea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT(var_a);
    tmp_return_value = var_a;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_a);
    Py_DECREF(var_a);
    var_a = NULL;
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


static PyObject *impl_api_commit_get$$$function__2_delete_proxy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_proxy = python_pars[0];
    struct Nuitka_FrameObject *frame_abb6819ce1e4c179978cb28954e52abc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_abb6819ce1e4c179978cb28954e52abc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_abb6819ce1e4c179978cb28954e52abc)) {
        Py_XDECREF(cache_frame_abb6819ce1e4c179978cb28954e52abc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_abb6819ce1e4c179978cb28954e52abc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_abb6819ce1e4c179978cb28954e52abc = MAKE_FUNCTION_FRAME(codeobj_abb6819ce1e4c179978cb28954e52abc, module_api_commit_get, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_abb6819ce1e4c179978cb28954e52abc->m_type_description == NULL);
    frame_abb6819ce1e4c179978cb28954e52abc = cache_frame_abb6819ce1e4c179978cb28954e52abc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_abb6819ce1e4c179978cb28954e52abc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_abb6819ce1e4c179978cb28954e52abc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_1 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_1 == NULL)) {
            tmp_expression_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[1]);
        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = mod_consts[5];
        CHECK_OBJECT(par_proxy);
        tmp_args_element_name_2 = par_proxy;
        frame_abb6819ce1e4c179978cb28954e52abc->m_frame.f_lineno = 19;
        tmp_args_element_name_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_name_2);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_1);

            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_abb6819ce1e4c179978cb28954e52abc->m_frame.f_lineno = 19;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_1);
        Py_DECREF(tmp_called_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_abb6819ce1e4c179978cb28954e52abc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_abb6819ce1e4c179978cb28954e52abc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_abb6819ce1e4c179978cb28954e52abc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_abb6819ce1e4c179978cb28954e52abc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_abb6819ce1e4c179978cb28954e52abc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_abb6819ce1e4c179978cb28954e52abc,
        type_description_1,
        par_proxy
    );


    // Release cached frame if used for exception.
    if (frame_abb6819ce1e4c179978cb28954e52abc == cache_frame_abb6819ce1e4c179978cb28954e52abc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_abb6819ce1e4c179978cb28954e52abc);
        cache_frame_abb6819ce1e4c179978cb28954e52abc = NULL;
    }

    assertFrameObject(frame_abb6819ce1e4c179978cb28954e52abc);

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
    Py_XDECREF(par_proxy);
    par_proxy = NULL;
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

    Py_XDECREF(par_proxy);
    par_proxy = NULL;
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


static PyObject *impl_api_commit_get$$$function__3_init(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_all_user_dict = NULL;
    PyObject *var_all_commit_direct = NULL;
    struct Nuitka_FrameObject *frame_c66613e2115840072bebde549c83d5f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c66613e2115840072bebde549c83d5f2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c66613e2115840072bebde549c83d5f2)) {
        Py_XDECREF(cache_frame_c66613e2115840072bebde549c83d5f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c66613e2115840072bebde549c83d5f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c66613e2115840072bebde549c83d5f2 = MAKE_FUNCTION_FRAME(codeobj_c66613e2115840072bebde549c83d5f2, module_api_commit_get, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_c66613e2115840072bebde549c83d5f2->m_type_description == NULL);
    frame_c66613e2115840072bebde549c83d5f2 = cache_frame_c66613e2115840072bebde549c83d5f2;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_c66613e2115840072bebde549c83d5f2);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_c66613e2115840072bebde549c83d5f2) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_1 != NULL);
        frame_c66613e2115840072bebde549c83d5f2->m_frame.f_lineno = 25;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[8]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c66613e2115840072bebde549c83d5f2);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_c66613e2115840072bebde549c83d5f2);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c66613e2115840072bebde549c83d5f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c66613e2115840072bebde549c83d5f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c66613e2115840072bebde549c83d5f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c66613e2115840072bebde549c83d5f2,
        type_description_1,
        var_all_user_dict,
        var_all_commit_direct
    );


    // Release cached frame if used for exception.
    if (frame_c66613e2115840072bebde549c83d5f2 == cache_frame_c66613e2115840072bebde549c83d5f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_c66613e2115840072bebde549c83d5f2);
        cache_frame_c66613e2115840072bebde549c83d5f2 = NULL;
    }

    assertFrameObject(frame_c66613e2115840072bebde549c83d5f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert(var_all_user_dict == NULL);
        var_all_user_dict = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_New();
        assert(var_all_commit_direct == NULL);
        var_all_commit_direct = tmp_assign_source_2;
    }
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_all_user_dict);
        tmp_tuple_element_1 = var_all_user_dict;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_all_commit_direct);
        tmp_tuple_element_1 = var_all_commit_direct;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_all_user_dict);
    Py_DECREF(var_all_user_dict);
    var_all_user_dict = NULL;
    CHECK_OBJECT(var_all_commit_direct);
    Py_DECREF(var_all_commit_direct);
    var_all_commit_direct = NULL;
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


static PyObject *impl_api_commit_get$$$function__4_video_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_data = python_pars[0];
    PyObject *var_video_basic_data = NULL;
    PyObject *var_video_oid = NULL;
    PyObject *var_copyright_type = NULL;
    PyObject *var_picture_add = NULL;
    PyObject *var_post_time_step = NULL;
    PyObject *var_cite_time_step = NULL;
    PyObject *var_desctrion = NULL;
    PyObject *var_owner_data = NULL;
    PyObject *var_owner_mid = NULL;
    PyObject *var_state_data = NULL;
    PyObject *var_view_number = NULL;
    PyObject *var_commit_number = NULL;
    PyObject *var_favorite_number = NULL;
    PyObject *var_coin_number = NULL;
    PyObject *var_share_number = NULL;
    PyObject *var_daily_highest_rank = NULL;
    PyObject *var_like_number = NULL;
    PyObject *var_dislike_number = NULL;
    PyObject *var_video_info_dire = NULL;
    struct Nuitka_FrameObject *frame_9fc98e0e58c44d43579ddf02e543dd2b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9fc98e0e58c44d43579ddf02e543dd2b = NULL;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_video_data);
        tmp_assign_source_1 = par_video_data;
        assert(var_video_basic_data == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_video_basic_data = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9fc98e0e58c44d43579ddf02e543dd2b)) {
        Py_XDECREF(cache_frame_9fc98e0e58c44d43579ddf02e543dd2b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9fc98e0e58c44d43579ddf02e543dd2b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9fc98e0e58c44d43579ddf02e543dd2b = MAKE_FUNCTION_FRAME(codeobj_9fc98e0e58c44d43579ddf02e543dd2b, module_api_commit_get, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_9fc98e0e58c44d43579ddf02e543dd2b->m_type_description == NULL);
    frame_9fc98e0e58c44d43579ddf02e543dd2b = cache_frame_9fc98e0e58c44d43579ddf02e543dd2b;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_9fc98e0e58c44d43579ddf02e543dd2b);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_9fc98e0e58c44d43579ddf02e543dd2b) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_1 != NULL);
        frame_9fc98e0e58c44d43579ddf02e543dd2b->m_frame.f_lineno = 35;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[9]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(var_video_basic_data);
        tmp_expression_name_1 = var_video_basic_data;
        tmp_subscript_name_1 = mod_consts[10];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_video_oid == NULL);
        var_video_oid = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_video_basic_data);
        tmp_expression_name_2 = var_video_basic_data;
        tmp_subscript_name_2 = mod_consts[11];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_copyright_type == NULL);
        var_copyright_type = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_video_basic_data);
        tmp_expression_name_3 = var_video_basic_data;
        tmp_subscript_name_3 = mod_consts[12];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_picture_add == NULL);
        var_picture_add = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_video_basic_data);
        tmp_expression_name_4 = var_video_basic_data;
        tmp_subscript_name_4 = mod_consts[13];
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_post_time_step == NULL);
        var_post_time_step = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_video_basic_data);
        tmp_expression_name_5 = var_video_basic_data;
        tmp_subscript_name_5 = mod_consts[14];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_cite_time_step == NULL);
        var_cite_time_step = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_6;
        CHECK_OBJECT(var_video_basic_data);
        tmp_expression_name_6 = var_video_basic_data;
        tmp_subscript_name_6 = mod_consts[15];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_6);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_desctrion == NULL);
        var_desctrion = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        CHECK_OBJECT(par_video_data);
        tmp_expression_name_7 = par_video_data;
        tmp_subscript_name_7 = mod_consts[16];
        tmp_assign_source_8 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_owner_data == NULL);
        var_owner_data = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_8;
        CHECK_OBJECT(var_owner_data);
        tmp_expression_name_8 = var_owner_data;
        tmp_subscript_name_8 = mod_consts[17];
        tmp_assign_source_9 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_owner_mid == NULL);
        var_owner_mid = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_9;
        CHECK_OBJECT(par_video_data);
        tmp_expression_name_9 = par_video_data;
        tmp_subscript_name_9 = mod_consts[18];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_9);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state_data == NULL);
        var_state_data = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_10;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_10 = var_state_data;
        tmp_subscript_name_10 = mod_consts[19];
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_10);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_view_number == NULL);
        var_view_number = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_11;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_11 = var_state_data;
        tmp_subscript_name_11 = mod_consts[20];
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_11);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_commit_number == NULL);
        var_commit_number = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_12;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_12 = var_state_data;
        tmp_subscript_name_12 = mod_consts[21];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_12);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_favorite_number == NULL);
        var_favorite_number = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_13;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_13 = var_state_data;
        tmp_subscript_name_13 = mod_consts[22];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_13);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_coin_number == NULL);
        var_coin_number = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_14;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_14 = var_state_data;
        tmp_subscript_name_14 = mod_consts[23];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_14);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_share_number == NULL);
        var_share_number = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_15;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_15 = var_state_data;
        tmp_subscript_name_15 = mod_consts[24];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_15, tmp_subscript_name_15);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_daily_highest_rank == NULL);
        var_daily_highest_rank = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_subscript_name_16;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_16 = var_state_data;
        tmp_subscript_name_16 = mod_consts[25];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_16, tmp_subscript_name_16);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_like_number == NULL);
        var_like_number = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_17;
        CHECK_OBJECT(var_state_data);
        tmp_expression_name_17 = var_state_data;
        tmp_subscript_name_17 = mod_consts[26];
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_17);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dislike_number == NULL);
        var_dislike_number = tmp_assign_source_18;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_2;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_2 != NULL);
        frame_9fc98e0e58c44d43579ddf02e543dd2b->m_frame.f_lineno = 60;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[27]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fc98e0e58c44d43579ddf02e543dd2b);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_9fc98e0e58c44d43579ddf02e543dd2b);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9fc98e0e58c44d43579ddf02e543dd2b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9fc98e0e58c44d43579ddf02e543dd2b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9fc98e0e58c44d43579ddf02e543dd2b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9fc98e0e58c44d43579ddf02e543dd2b,
        type_description_1,
        par_video_data,
        var_video_basic_data,
        var_video_oid,
        var_copyright_type,
        var_picture_add,
        var_post_time_step,
        var_cite_time_step,
        var_desctrion,
        var_owner_data,
        var_owner_mid,
        var_state_data,
        var_view_number,
        var_commit_number,
        var_favorite_number,
        var_coin_number,
        var_share_number,
        var_daily_highest_rank,
        var_like_number,
        var_dislike_number,
        var_video_info_dire
    );


    // Release cached frame if used for exception.
    if (frame_9fc98e0e58c44d43579ddf02e543dd2b == cache_frame_9fc98e0e58c44d43579ddf02e543dd2b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_9fc98e0e58c44d43579ddf02e543dd2b);
        cache_frame_9fc98e0e58c44d43579ddf02e543dd2b = NULL;
    }

    assertFrameObject(frame_9fc98e0e58c44d43579ddf02e543dd2b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[28];
        CHECK_OBJECT(var_video_oid);
        tmp_dict_value_1 = var_video_oid;
        tmp_assign_source_19 = _PyDict_NewPresized( 15 );
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[29];
        CHECK_OBJECT(var_copyright_type);
        tmp_dict_value_1 = var_copyright_type;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[30];
        CHECK_OBJECT(var_picture_add);
        tmp_dict_value_1 = var_picture_add;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[31];
        CHECK_OBJECT(var_post_time_step);
        tmp_dict_value_1 = var_post_time_step;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[32];
        CHECK_OBJECT(var_cite_time_step);
        tmp_dict_value_1 = var_cite_time_step;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[33];
        CHECK_OBJECT(var_desctrion);
        tmp_dict_value_1 = var_desctrion;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[34];
        CHECK_OBJECT(var_owner_mid);
        tmp_dict_value_1 = var_owner_mid;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[35];
        CHECK_OBJECT(var_view_number);
        tmp_dict_value_1 = var_view_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[36];
        CHECK_OBJECT(var_favorite_number);
        tmp_dict_value_1 = var_favorite_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[37];
        CHECK_OBJECT(var_coin_number);
        tmp_dict_value_1 = var_coin_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[38];
        CHECK_OBJECT(var_share_number);
        tmp_dict_value_1 = var_share_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[39];
        CHECK_OBJECT(var_daily_highest_rank);
        tmp_dict_value_1 = var_daily_highest_rank;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[40];
        CHECK_OBJECT(var_like_number);
        tmp_dict_value_1 = var_like_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[41];
        CHECK_OBJECT(var_dislike_number);
        tmp_dict_value_1 = var_dislike_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[42];
        CHECK_OBJECT(var_commit_number);
        tmp_dict_value_1 = var_commit_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_19, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_video_info_dire == NULL);
        var_video_info_dire = tmp_assign_source_19;
    }
    CHECK_OBJECT(var_video_info_dire);
    tmp_return_value = var_video_info_dire;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);
    par_video_data = NULL;
    CHECK_OBJECT(var_video_basic_data);
    Py_DECREF(var_video_basic_data);
    var_video_basic_data = NULL;
    CHECK_OBJECT(var_video_oid);
    Py_DECREF(var_video_oid);
    var_video_oid = NULL;
    CHECK_OBJECT(var_copyright_type);
    Py_DECREF(var_copyright_type);
    var_copyright_type = NULL;
    CHECK_OBJECT(var_picture_add);
    Py_DECREF(var_picture_add);
    var_picture_add = NULL;
    CHECK_OBJECT(var_post_time_step);
    Py_DECREF(var_post_time_step);
    var_post_time_step = NULL;
    CHECK_OBJECT(var_cite_time_step);
    Py_DECREF(var_cite_time_step);
    var_cite_time_step = NULL;
    CHECK_OBJECT(var_desctrion);
    Py_DECREF(var_desctrion);
    var_desctrion = NULL;
    CHECK_OBJECT(var_owner_data);
    Py_DECREF(var_owner_data);
    var_owner_data = NULL;
    CHECK_OBJECT(var_owner_mid);
    Py_DECREF(var_owner_mid);
    var_owner_mid = NULL;
    CHECK_OBJECT(var_state_data);
    Py_DECREF(var_state_data);
    var_state_data = NULL;
    CHECK_OBJECT(var_view_number);
    Py_DECREF(var_view_number);
    var_view_number = NULL;
    CHECK_OBJECT(var_commit_number);
    Py_DECREF(var_commit_number);
    var_commit_number = NULL;
    CHECK_OBJECT(var_favorite_number);
    Py_DECREF(var_favorite_number);
    var_favorite_number = NULL;
    CHECK_OBJECT(var_coin_number);
    Py_DECREF(var_coin_number);
    var_coin_number = NULL;
    CHECK_OBJECT(var_share_number);
    Py_DECREF(var_share_number);
    var_share_number = NULL;
    CHECK_OBJECT(var_daily_highest_rank);
    Py_DECREF(var_daily_highest_rank);
    var_daily_highest_rank = NULL;
    CHECK_OBJECT(var_like_number);
    Py_DECREF(var_like_number);
    var_like_number = NULL;
    CHECK_OBJECT(var_dislike_number);
    Py_DECREF(var_dislike_number);
    var_dislike_number = NULL;
    CHECK_OBJECT(var_video_info_dire);
    Py_DECREF(var_video_info_dire);
    var_video_info_dire = NULL;
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

    CHECK_OBJECT(par_video_data);
    Py_DECREF(par_video_data);
    par_video_data = NULL;
    CHECK_OBJECT(var_video_basic_data);
    Py_DECREF(var_video_basic_data);
    var_video_basic_data = NULL;
    Py_XDECREF(var_video_oid);
    var_video_oid = NULL;
    Py_XDECREF(var_copyright_type);
    var_copyright_type = NULL;
    Py_XDECREF(var_picture_add);
    var_picture_add = NULL;
    Py_XDECREF(var_post_time_step);
    var_post_time_step = NULL;
    Py_XDECREF(var_cite_time_step);
    var_cite_time_step = NULL;
    Py_XDECREF(var_desctrion);
    var_desctrion = NULL;
    Py_XDECREF(var_owner_data);
    var_owner_data = NULL;
    Py_XDECREF(var_owner_mid);
    var_owner_mid = NULL;
    Py_XDECREF(var_state_data);
    var_state_data = NULL;
    Py_XDECREF(var_view_number);
    var_view_number = NULL;
    Py_XDECREF(var_commit_number);
    var_commit_number = NULL;
    Py_XDECREF(var_favorite_number);
    var_favorite_number = NULL;
    Py_XDECREF(var_coin_number);
    var_coin_number = NULL;
    Py_XDECREF(var_share_number);
    var_share_number = NULL;
    Py_XDECREF(var_daily_highest_rank);
    var_daily_highest_rank = NULL;
    Py_XDECREF(var_like_number);
    var_like_number = NULL;
    Py_XDECREF(var_dislike_number);
    var_dislike_number = NULL;
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


static PyObject *impl_api_commit_get$$$function__5_detect_replies(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_oid = python_pars[0];
    PyObject *par_root_rid = python_pars[1];
    PyObject *par_root_timestep = python_pars[2];
    PyObject *par_cookie_dict = python_pars[3];
    PyObject *var_UserAgent = NULL;
    PyObject *var_sleep = NULL;
    PyObject *var_randint = NULL;
    PyObject *var_ua = NULL;
    PyObject *var_page_count = NULL;
    PyObject *var_replies_full_url = NULL;
    PyObject *var_get_replies_proxy = NULL;
    PyObject *var_ua_str = NULL;
    PyObject *var_replies = NULL;
    PyObject *var_sleep_seconds = NULL;
    PyObject *var_replies_json = NULL;
    PyObject *var_commit_data = NULL;
    PyObject *var_page_data = NULL;
    PyObject *var_replies_number = NULL;
    PyObject *var_replies_show_size = NULL;
    PyObject *var_replies_found = NULL;
    struct Nuitka_FrameObject *frame_758485e474914a938407d2a5a7433807;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_758485e474914a938407d2a5a7433807 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_758485e474914a938407d2a5a7433807)) {
        Py_XDECREF(cache_frame_758485e474914a938407d2a5a7433807);

#if _DEBUG_REFCOUNTS
        if (cache_frame_758485e474914a938407d2a5a7433807 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_758485e474914a938407d2a5a7433807 = MAKE_FUNCTION_FRAME(codeobj_758485e474914a938407d2a5a7433807, module_api_commit_get, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_758485e474914a938407d2a5a7433807->m_type_description == NULL);
    frame_758485e474914a938407d2a5a7433807 = cache_frame_758485e474914a938407d2a5a7433807;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_758485e474914a938407d2a5a7433807);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_758485e474914a938407d2a5a7433807) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[43];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[44];
        tmp_level_name_1 = mod_consts[45];
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 85;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_api_commit_get,
                mod_consts[46],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_UserAgent == NULL);
        var_UserAgent = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[47];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[48];
        tmp_level_name_2 = mod_consts[45];
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 86;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        assert(!(tmp_import_name_from_2 == NULL));
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_api_commit_get,
                mod_consts[49],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_2);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_sleep == NULL);
        var_sleep = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[50];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = mod_consts[51];
        tmp_level_name_3 = mod_consts[45];
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 87;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_api_commit_get,
                mod_consts[52],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_randint == NULL);
        var_randint = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        CHECK_OBJECT(var_UserAgent);
        tmp_called_name_1 = var_UserAgent;
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 88;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ua == NULL);
        var_ua = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = mod_consts[45];
        assert(var_page_count == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_page_count = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        PyObject *tmp_unicode_arg_3;
        tmp_left_name_5 = mod_consts[53];
        CHECK_OBJECT(par_video_oid);
        tmp_unicode_arg_1 = par_video_oid;
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_2 = mod_consts[54];
        tmp_left_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_2);
        Py_DECREF(tmp_left_name_4);
        if (tmp_left_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_root_rid);
        tmp_unicode_arg_2 = par_root_rid;
        tmp_right_name_3 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_3);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_3, tmp_right_name_3);
        Py_DECREF(tmp_left_name_3);
        Py_DECREF(tmp_right_name_3);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_4 = mod_consts[55];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_4);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_root_timestep);
        tmp_unicode_arg_3 = par_root_timestep;
        tmp_right_name_5 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_5);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_replies_full_url == NULL);
        var_replies_full_url = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_2;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 94;
        tmp_assign_source_7 = CALL_FUNCTION_NO_ARGS(tmp_called_name_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_get_replies_proxy == NULL);
        var_get_replies_proxy = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_name_1;
        CHECK_OBJECT(var_ua);
        tmp_expression_name_1 = var_ua;
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[50]);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ua_str == NULL);
        var_ua_str = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_1;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_3 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_replies_full_url);
        tmp_tuple_element_1 = var_replies_full_url;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[57];
        tmp_dict_key_2 = mod_consts[58];
        tmp_called_instance_1 = mod_consts[59];
        CHECK_OBJECT(var_get_replies_proxy);
        tmp_args_element_name_1 = var_get_replies_proxy;
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 96;
        tmp_dict_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_name_1);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_3);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_kwargs_name_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[60];
            tmp_dict_key_3 = mod_consts[61];
            CHECK_OBJECT(var_ua_str);
            tmp_dict_value_3 = var_ua_str;
            tmp_dict_value_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[62];
            CHECK_OBJECT(par_cookie_dict);
            tmp_dict_value_1 = par_cookie_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 96;
        tmp_assign_source_9 = CALL_FUNCTION(tmp_called_name_3, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_3);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_replies == NULL);
        var_replies = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_name_4;
        CHECK_OBJECT(var_randint);
        tmp_called_name_4 = var_randint;
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 100;
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_4, &PyTuple_GET_ITEM(mod_consts[63], 0));

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sleep_seconds == NULL);
        var_sleep_seconds = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[64];
        CHECK_OBJECT(var_replies);
        tmp_assattr_target_1 = var_replies;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_replies);
        tmp_expression_name_3 = var_replies;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[3]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_replies_json == NULL);
        var_replies_json = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_replies_json);
        tmp_args_element_name_2 = var_replies_json;
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 105;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[67], tmp_args_element_name_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_commit_data == NULL);
        var_commit_data = tmp_assign_source_12;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_commit_data);
        tmp_expression_name_4 = var_commit_data;
        tmp_subscript_name_1 = mod_consts[68];
        tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_1);
        if (tmp_compexpr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = mod_consts[45];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        Py_DECREF(tmp_compexpr_left_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 106;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = mod_consts[69];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_commit_data);
        tmp_expression_name_5 = var_commit_data;
        tmp_subscript_name_2 = mod_consts[70];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_commit_data;
            assert(old != NULL);
            var_commit_data = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_commit_data);
        tmp_expression_name_6 = var_commit_data;
        tmp_subscript_name_3 = mod_consts[71];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_page_data == NULL);
        var_page_data = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_4;
        CHECK_OBJECT(var_page_data);
        tmp_expression_name_7 = var_page_data;
        tmp_subscript_name_4 = mod_consts[72];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_4);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_replies_number == NULL);
        var_replies_number = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_5;
        CHECK_OBJECT(var_page_data);
        tmp_expression_name_8 = var_page_data;
        tmp_subscript_name_5 = mod_consts[73];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_5);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_replies_show_size == NULL);
        var_replies_show_size = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_tmp_condition_result_2_object_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_replies_number);
        tmp_compexpr_left_2 = var_replies_number;
        tmp_compexpr_right_2 = mod_consts[45];
        tmp_tmp_condition_result_2_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_tmp_condition_result_2_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_tmp_condition_result_2_object_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_2_object_1);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_2_object_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = Py_False;
        assert(var_replies_found == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_replies_found = tmp_assign_source_17;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        tmp_called_name_5 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_5 != NULL);
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[74]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = Py_True;
        assert(var_replies_found == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_replies_found = tmp_assign_source_18;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_replies_number);
        tmp_compexpr_left_3 = var_replies_number;
        CHECK_OBJECT(var_replies_show_size);
        tmp_compexpr_right_3 = var_replies_show_size;
        tmp_condition_result_3 = RICH_COMPARE_LT_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[75];
        {
            PyObject *old = var_page_count;
            assert(old != NULL);
            var_page_count = tmp_assign_source_19;
            Py_INCREF(var_page_count);
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_tmp_condition_result_4_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_replies_number);
        tmp_left_name_6 = var_replies_number;
        CHECK_OBJECT(var_replies_show_size);
        tmp_right_name_6 = var_replies_show_size;
        tmp_compexpr_left_4 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_6);
        if (tmp_compexpr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_4 = mod_consts[45];
        tmp_tmp_condition_result_4_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        Py_DECREF(tmp_compexpr_left_4);
        if (tmp_tmp_condition_result_4_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_4_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_4_object_1);

            exception_lineno = 125;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_4_object_1);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        if (var_replies_number == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_8 = var_replies_number;
        if (var_replies_show_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_7 = var_replies_show_size;
        tmp_left_name_7 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_7);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_8 = mod_consts[75];
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_7, tmp_right_name_8);
        Py_DECREF(tmp_left_name_7);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_page_count;
            assert(old != NULL);
            var_page_count = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        if (var_replies_number == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_left_name_9 = var_replies_number;
        if (var_replies_show_size == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[77]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_9 = var_replies_show_size;
        tmp_assign_source_21 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_left_name_9, tmp_right_name_9);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_page_count;
            assert(old != NULL);
            var_page_count = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    branch_end_3:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_10;
        PyObject *tmp_unicode_arg_4;
        tmp_called_name_6 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_6 != NULL);
        tmp_left_name_10 = mod_consts[78];
        if (var_page_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_unicode_arg_4 = var_page_count;
        tmp_right_name_10 = PyObject_Unicode(tmp_unicode_arg_4);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_10, tmp_right_name_10);
        Py_DECREF(tmp_right_name_10);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_758485e474914a938407d2a5a7433807->m_frame.f_lineno = 129;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_2:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_replies_found);
        tmp_tuple_element_2 = var_replies_found;
        tmp_return_value = PyTuple_New(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_commit_data);
        tmp_tuple_element_2 = var_commit_data;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        if (var_page_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = var_page_count;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_758485e474914a938407d2a5a7433807);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_758485e474914a938407d2a5a7433807);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_758485e474914a938407d2a5a7433807);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_758485e474914a938407d2a5a7433807, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_758485e474914a938407d2a5a7433807->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_758485e474914a938407d2a5a7433807, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_758485e474914a938407d2a5a7433807,
        type_description_1,
        par_video_oid,
        par_root_rid,
        par_root_timestep,
        par_cookie_dict,
        var_UserAgent,
        var_sleep,
        var_randint,
        var_ua,
        var_page_count,
        var_replies_full_url,
        var_get_replies_proxy,
        var_ua_str,
        var_replies,
        var_sleep_seconds,
        var_replies_json,
        var_commit_data,
        var_page_data,
        var_replies_number,
        var_replies_show_size,
        var_replies_found
    );


    // Release cached frame if used for exception.
    if (frame_758485e474914a938407d2a5a7433807 == cache_frame_758485e474914a938407d2a5a7433807) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_758485e474914a938407d2a5a7433807);
        cache_frame_758485e474914a938407d2a5a7433807 = NULL;
    }

    assertFrameObject(frame_758485e474914a938407d2a5a7433807);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_video_oid);
    Py_DECREF(par_video_oid);
    par_video_oid = NULL;
    CHECK_OBJECT(par_root_rid);
    Py_DECREF(par_root_rid);
    par_root_rid = NULL;
    CHECK_OBJECT(par_root_timestep);
    Py_DECREF(par_root_timestep);
    par_root_timestep = NULL;
    Py_XDECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    CHECK_OBJECT(var_UserAgent);
    Py_DECREF(var_UserAgent);
    var_UserAgent = NULL;
    CHECK_OBJECT(var_sleep);
    Py_DECREF(var_sleep);
    var_sleep = NULL;
    CHECK_OBJECT(var_randint);
    Py_DECREF(var_randint);
    var_randint = NULL;
    Py_XDECREF(var_ua);
    var_ua = NULL;
    Py_XDECREF(var_page_count);
    var_page_count = NULL;
    Py_XDECREF(var_replies_full_url);
    var_replies_full_url = NULL;
    Py_XDECREF(var_get_replies_proxy);
    var_get_replies_proxy = NULL;
    Py_XDECREF(var_ua_str);
    var_ua_str = NULL;
    Py_XDECREF(var_replies);
    var_replies = NULL;
    CHECK_OBJECT(var_sleep_seconds);
    Py_DECREF(var_sleep_seconds);
    var_sleep_seconds = NULL;
    Py_XDECREF(var_replies_json);
    var_replies_json = NULL;
    CHECK_OBJECT(var_commit_data);
    Py_DECREF(var_commit_data);
    var_commit_data = NULL;
    Py_XDECREF(var_page_data);
    var_page_data = NULL;
    Py_XDECREF(var_replies_number);
    var_replies_number = NULL;
    Py_XDECREF(var_replies_show_size);
    var_replies_show_size = NULL;
    Py_XDECREF(var_replies_found);
    var_replies_found = NULL;
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

    CHECK_OBJECT(par_video_oid);
    Py_DECREF(par_video_oid);
    par_video_oid = NULL;
    CHECK_OBJECT(par_root_rid);
    Py_DECREF(par_root_rid);
    par_root_rid = NULL;
    CHECK_OBJECT(par_root_timestep);
    Py_DECREF(par_root_timestep);
    par_root_timestep = NULL;
    Py_XDECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    Py_XDECREF(var_UserAgent);
    var_UserAgent = NULL;
    Py_XDECREF(var_sleep);
    var_sleep = NULL;
    Py_XDECREF(var_randint);
    var_randint = NULL;
    Py_XDECREF(var_ua);
    var_ua = NULL;
    Py_XDECREF(var_page_count);
    var_page_count = NULL;
    Py_XDECREF(var_replies_full_url);
    var_replies_full_url = NULL;
    Py_XDECREF(var_get_replies_proxy);
    var_get_replies_proxy = NULL;
    Py_XDECREF(var_ua_str);
    var_ua_str = NULL;
    Py_XDECREF(var_replies);
    var_replies = NULL;
    Py_XDECREF(var_sleep_seconds);
    var_sleep_seconds = NULL;
    Py_XDECREF(var_replies_json);
    var_replies_json = NULL;
    Py_XDECREF(var_commit_data);
    var_commit_data = NULL;
    Py_XDECREF(var_page_data);
    var_page_data = NULL;
    Py_XDECREF(var_replies_number);
    var_replies_number = NULL;
    Py_XDECREF(var_replies_show_size);
    var_replies_show_size = NULL;
    Py_XDECREF(var_replies_found);
    var_replies_found = NULL;
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


static PyObject *impl_api_commit_get$$$function__6_reply_get_online(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_video_oid = python_pars[0];
    PyObject *par_root_rid = python_pars[1];
    PyObject *par_root_timestep = python_pars[2];
    PyObject *par_all_user_dict = python_pars[3];
    PyObject *par_all_commit_direct = python_pars[4];
    PyObject *par_commit_data = python_pars[5];
    PyObject *par_page_count = python_pars[6];
    PyObject *par_continue_mode_enable = python_pars[7];
    PyObject *par_timestep_file = python_pars[8];
    PyObject *par_timestep_add_mode = python_pars[9];
    PyObject *par_timestep_key_dire = python_pars[10];
    PyObject *par_all_user_full_timestep_dict = python_pars[11];
    PyObject *par_all_commit_full_timestep_dict = python_pars[12];
    PyObject *par_cookie_dict = python_pars[13];
    PyObject *var_sleep = NULL;
    PyObject *var_randint = NULL;
    PyObject *var_replay_page_now = NULL;
    PyObject *var_ua = NULL;
    PyObject *var_replies_full_url = NULL;
    PyObject *var_replies_get_proxy = NULL;
    PyObject *var_ua_str = NULL;
    PyObject *var_replies = NULL;
    PyObject *var_sleep_seconds = NULL;
    PyObject *var_replies_json = NULL;
    PyObject *var_replies_data = NULL;
    PyObject *var_reply_index = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_d7acd605691a0a304d6278f461994bfc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7acd605691a0a304d6278f461994bfc = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[47];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = mod_consts[48];
        tmp_level_name_1 = mod_consts[45];
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_api_commit_get,
                mod_consts[49],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[49]);
        }

        Py_DECREF(tmp_import_name_from_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_sleep == NULL);
        var_sleep = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d7acd605691a0a304d6278f461994bfc)) {
        Py_XDECREF(cache_frame_d7acd605691a0a304d6278f461994bfc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7acd605691a0a304d6278f461994bfc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7acd605691a0a304d6278f461994bfc = MAKE_FUNCTION_FRAME(codeobj_d7acd605691a0a304d6278f461994bfc, module_api_commit_get, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_d7acd605691a0a304d6278f461994bfc->m_type_description == NULL);
    frame_d7acd605691a0a304d6278f461994bfc = cache_frame_d7acd605691a0a304d6278f461994bfc;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_d7acd605691a0a304d6278f461994bfc);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_d7acd605691a0a304d6278f461994bfc) == 2); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[50];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = mod_consts[51];
        tmp_level_name_2 = mod_consts[45];
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 139;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_api_commit_get,
                mod_consts[52],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_randint == NULL);
        var_randint = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[45];
        assert(var_replay_page_now == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_replay_page_now = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_1;
        tmp_called_name_1 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_name_1 == NULL)) {
            tmp_called_name_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 142;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS(tmp_called_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ua == NULL);
        var_ua = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        tmp_xrange_low_1 = mod_consts[45];
        CHECK_OBJECT(par_page_count);
        tmp_xrange_high_1 = par_page_count;
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 144;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_replay_page_now;
            var_replay_page_now = tmp_assign_source_7;
            Py_INCREF(var_replay_page_now);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_unicode_arg_2;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_2 != NULL);
        tmp_left_name_3 = mod_consts[80];
        CHECK_OBJECT(var_replay_page_now);
        tmp_unicode_arg_1 = var_replay_page_now;
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_2 = mod_consts[81];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_page_count == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_unicode_arg_2 = par_page_count;
        tmp_right_name_3 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_3);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_3);
        if (tmp_args_element_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 148;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, tmp_args_element_name_1);
        Py_DECREF(tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_left_name_8;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_4;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_right_name_5;
        PyObject *tmp_right_name_6;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_right_name_7;
        PyObject *tmp_right_name_8;
        PyObject *tmp_unicode_arg_5;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        PyObject *tmp_unicode_arg_6;
        tmp_left_name_10 = mod_consts[82];
        CHECK_OBJECT(var_replay_page_now);
        tmp_unicode_arg_3 = var_replay_page_now;
        tmp_right_name_4 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_right_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_10, tmp_right_name_4);
        Py_DECREF(tmp_right_name_4);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_5 = mod_consts[83];
        tmp_left_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_9, tmp_right_name_5);
        Py_DECREF(tmp_left_name_9);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_video_oid == NULL) {
            Py_DECREF(tmp_left_name_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_unicode_arg_4 = par_video_oid;
        tmp_right_name_6 = PyObject_Unicode(tmp_unicode_arg_4);
        if (tmp_right_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_8);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_8, tmp_right_name_6);
        Py_DECREF(tmp_left_name_8);
        Py_DECREF(tmp_right_name_6);
        if (tmp_left_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_7 = mod_consts[54];
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_7, tmp_right_name_7);
        Py_DECREF(tmp_left_name_7);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_root_rid == NULL) {
            Py_DECREF(tmp_left_name_6);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_unicode_arg_5 = par_root_rid;
        tmp_right_name_8 = PyObject_Unicode(tmp_unicode_arg_5);
        if (tmp_right_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_6);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_6, tmp_right_name_8);
        Py_DECREF(tmp_left_name_6);
        Py_DECREF(tmp_right_name_8);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_9 = mod_consts[55];
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_5, tmp_right_name_9);
        Py_DECREF(tmp_left_name_5);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_root_timestep == NULL) {
            Py_DECREF(tmp_left_name_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[85]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_unicode_arg_6 = par_root_timestep;
        tmp_right_name_10 = PyObject_Unicode(tmp_unicode_arg_6);
        if (tmp_right_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_4);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_4, tmp_right_name_10);
        Py_DECREF(tmp_left_name_4);
        Py_DECREF(tmp_right_name_10);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_replies_full_url;
            var_replies_full_url = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_name_3;
        tmp_called_name_3 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_name_3 == NULL)) {
            tmp_called_name_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 153;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_name_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_replies_get_proxy;
            var_replies_get_proxy = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_1;
        if (var_ua == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_name_1 = var_ua;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_name_1, mod_consts[50]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ua_str;
            var_ua_str = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_2;
        tmp_expression_name_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_name_2 == NULL)) {
            tmp_expression_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_4 = LOOKUP_ATTRIBUTE(tmp_expression_name_2, mod_consts[1]);
        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_replies_full_url);
        tmp_tuple_element_1 = var_replies_full_url;
        tmp_args_name_1 = PyTuple_New(1);
        PyTuple_SET_ITEM0(tmp_args_name_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[57];
        tmp_dict_key_2 = mod_consts[58];
        tmp_called_instance_1 = mod_consts[59];
        CHECK_OBJECT(var_replies_get_proxy);
        tmp_args_element_name_2 = var_replies_get_proxy;
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 155;
        tmp_dict_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_name_2);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_name_4);
            Py_DECREF(tmp_args_name_1);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_dict_value_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_kwargs_name_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[60];
            tmp_dict_key_3 = mod_consts[61];
            CHECK_OBJECT(var_ua_str);
            tmp_dict_value_3 = var_ua_str;
            tmp_dict_value_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_dict_value_1, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[62];
            if (par_cookie_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 156;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_cookie_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        goto try_except_handler_2;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 155;
        tmp_assign_source_11 = CALL_FUNCTION(tmp_called_name_4, tmp_args_name_1, tmp_kwargs_name_1);
        Py_DECREF(tmp_called_name_4);
        Py_DECREF(tmp_args_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_replies;
            var_replies = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_name_5;
        if (var_randint == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[52]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_5 = var_randint;
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 158;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_name_5, &PyTuple_GET_ITEM(mod_consts[63], 0));

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_sleep_seconds;
            var_sleep_seconds = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[64];
        CHECK_OBJECT(var_replies);
        tmp_assattr_target_1 = var_replies;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[65], tmp_assattr_name_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_3;
        CHECK_OBJECT(var_replies);
        tmp_expression_name_3 = var_replies;
        tmp_assign_source_13 = LOOKUP_ATTRIBUTE(tmp_expression_name_3, mod_consts[3]);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_replies_json;
            var_replies_json = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_name_3;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_replies_json);
        tmp_args_element_name_3 = var_replies_json;
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 163;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[67], tmp_args_element_name_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_commit_data;
            par_commit_data = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_commit_data);
        tmp_expression_name_4 = par_commit_data;
        tmp_subscript_name_1 = mod_consts[70];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = par_commit_data;
            assert(old != NULL);
            par_commit_data = tmp_assign_source_15;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(par_commit_data);
        tmp_expression_name_5 = par_commit_data;
        tmp_subscript_name_2 = mod_consts[88];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_replies_data;
            var_replies_data = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = mod_consts[45];
        {
            PyObject *old = var_reply_index;
            var_reply_index = tmp_assign_source_17;
            Py_INCREF(var_reply_index);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT(var_replies_data);
        tmp_compexpr_left_1 = var_replies_data;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_compexpr_left_1 != tmp_compexpr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        PyObject *tmp_len_arg_1;
        tmp_xrange_low_2 = mod_consts[45];
        CHECK_OBJECT(var_replies_data);
        tmp_len_arg_1 = var_replies_data;
        tmp_xrange_high_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_high_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_2);
        Py_DECREF(tmp_xrange_high_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_18 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_19 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_19 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooooooooo";
                exception_lineno = 170;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_20 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_reply_index;
            var_reply_index = tmp_assign_source_20;
            Py_INCREF(var_reply_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_11;
        PyObject *tmp_unicode_arg_7;
        PyObject *tmp_left_name_14;
        PyObject *tmp_right_name_12;
        PyObject *tmp_right_name_13;
        PyObject *tmp_right_name_14;
        PyObject *tmp_unicode_arg_8;
        PyObject *tmp_len_arg_2;
        tmp_called_name_6 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_6 != NULL);
        tmp_left_name_13 = mod_consts[89];
        CHECK_OBJECT(var_reply_index);
        tmp_left_name_14 = var_reply_index;
        tmp_right_name_12 = mod_consts[75];
        tmp_unicode_arg_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_left_name_14, tmp_right_name_12);
        if (tmp_unicode_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_11 = PyObject_Unicode(tmp_unicode_arg_7);
        Py_DECREF(tmp_unicode_arg_7);
        if (tmp_right_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_left_name_12 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_13, tmp_right_name_11);
        Py_DECREF(tmp_right_name_11);
        if (tmp_left_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_13 = mod_consts[81];
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_12, tmp_right_name_13);
        Py_DECREF(tmp_left_name_12);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        if (var_replies_data == NULL) {
            Py_DECREF(tmp_left_name_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_len_arg_2 = var_replies_data;
        tmp_unicode_arg_8 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_unicode_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_right_name_14 = PyObject_Unicode(tmp_unicode_arg_8);
        Py_DECREF(tmp_unicode_arg_8);
        if (tmp_right_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_11);

            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_11, tmp_right_name_14);
        Py_DECREF(tmp_left_name_11);
        Py_DECREF(tmp_right_name_14);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 171;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_7;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_dict_key_4 = mod_consts[92];
        if (par_continue_mode_enable == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_dict_value_4 = par_continue_mode_enable;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 18 );
        {
            PyObject *tmp_called_instance_3;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[93];
            if (var_replies_data == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = var_replies_data;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[94];
            if (var_reply_index == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[95]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = var_reply_index;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[96];
            tmp_dict_value_4 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[84];
            if (par_root_rid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[84]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 172;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_root_rid;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[97];
            if (par_all_user_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_all_user_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[98];
            if (par_all_commit_direct == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_all_commit_direct;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[99];
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 173;
            tmp_dict_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[47]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[100];
            tmp_dict_value_4 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[102];
            tmp_dict_value_4 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[103];
            tmp_dict_value_4 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[28];
            if (par_video_oid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_video_oid;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[104];
            if (par_timestep_file == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_timestep_file;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[105];
            if (par_timestep_add_mode == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_timestep_add_mode;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[106];
            if (par_timestep_key_dire == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_timestep_key_dire;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[107];
            if (par_all_user_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_all_user_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[108];
            if (par_all_commit_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_all_commit_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[87];
            if (par_cookie_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 173;
                type_description_1 = "oooooooooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_4 = par_cookie_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_4, tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kwargs_name_2);
        goto try_except_handler_4;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_d7acd605691a0a304d6278f461994bfc->m_frame.f_lineno = 172;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_7, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 172;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 172;
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 172;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[109];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 172;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_all_commit_direct;
            par_all_commit_direct = tmp_assign_source_24;
            Py_INCREF(par_all_commit_direct);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_all_user_dict;
            par_all_user_dict = tmp_assign_source_25;
            Py_INCREF(par_all_user_dict);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 170;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 144;
        type_description_1 = "oooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_tuple_element_2;
        if (par_all_commit_direct == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_2 = par_all_commit_direct;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        if (par_all_user_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_2 = par_all_user_dict;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7acd605691a0a304d6278f461994bfc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7acd605691a0a304d6278f461994bfc);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_d7acd605691a0a304d6278f461994bfc);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d7acd605691a0a304d6278f461994bfc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7acd605691a0a304d6278f461994bfc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7acd605691a0a304d6278f461994bfc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7acd605691a0a304d6278f461994bfc,
        type_description_1,
        par_video_oid,
        par_root_rid,
        par_root_timestep,
        par_all_user_dict,
        par_all_commit_direct,
        par_commit_data,
        par_page_count,
        par_continue_mode_enable,
        par_timestep_file,
        par_timestep_add_mode,
        par_timestep_key_dire,
        par_all_user_full_timestep_dict,
        par_all_commit_full_timestep_dict,
        par_cookie_dict,
        var_sleep,
        var_randint,
        var_replay_page_now,
        var_ua,
        var_replies_full_url,
        var_replies_get_proxy,
        var_ua_str,
        var_replies,
        var_sleep_seconds,
        var_replies_json,
        var_replies_data,
        var_reply_index
    );


    // Release cached frame if used for exception.
    if (frame_d7acd605691a0a304d6278f461994bfc == cache_frame_d7acd605691a0a304d6278f461994bfc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_d7acd605691a0a304d6278f461994bfc);
        cache_frame_d7acd605691a0a304d6278f461994bfc = NULL;
    }

    assertFrameObject(frame_d7acd605691a0a304d6278f461994bfc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_video_oid);
    par_video_oid = NULL;
    Py_XDECREF(par_root_rid);
    par_root_rid = NULL;
    Py_XDECREF(par_root_timestep);
    par_root_timestep = NULL;
    Py_XDECREF(par_all_user_dict);
    par_all_user_dict = NULL;
    Py_XDECREF(par_all_commit_direct);
    par_all_commit_direct = NULL;
    Py_XDECREF(par_commit_data);
    par_commit_data = NULL;
    Py_XDECREF(par_page_count);
    par_page_count = NULL;
    Py_XDECREF(par_continue_mode_enable);
    par_continue_mode_enable = NULL;
    Py_XDECREF(par_timestep_file);
    par_timestep_file = NULL;
    Py_XDECREF(par_timestep_add_mode);
    par_timestep_add_mode = NULL;
    Py_XDECREF(par_timestep_key_dire);
    par_timestep_key_dire = NULL;
    Py_XDECREF(par_all_user_full_timestep_dict);
    par_all_user_full_timestep_dict = NULL;
    Py_XDECREF(par_all_commit_full_timestep_dict);
    par_all_commit_full_timestep_dict = NULL;
    Py_XDECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    CHECK_OBJECT(var_sleep);
    Py_DECREF(var_sleep);
    var_sleep = NULL;
    Py_XDECREF(var_randint);
    var_randint = NULL;
    Py_XDECREF(var_replay_page_now);
    var_replay_page_now = NULL;
    Py_XDECREF(var_ua);
    var_ua = NULL;
    Py_XDECREF(var_replies_full_url);
    var_replies_full_url = NULL;
    Py_XDECREF(var_replies_get_proxy);
    var_replies_get_proxy = NULL;
    Py_XDECREF(var_ua_str);
    var_ua_str = NULL;
    Py_XDECREF(var_replies);
    var_replies = NULL;
    Py_XDECREF(var_sleep_seconds);
    var_sleep_seconds = NULL;
    Py_XDECREF(var_replies_json);
    var_replies_json = NULL;
    Py_XDECREF(var_replies_data);
    var_replies_data = NULL;
    Py_XDECREF(var_reply_index);
    var_reply_index = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_video_oid);
    par_video_oid = NULL;
    Py_XDECREF(par_root_rid);
    par_root_rid = NULL;
    Py_XDECREF(par_root_timestep);
    par_root_timestep = NULL;
    Py_XDECREF(par_all_user_dict);
    par_all_user_dict = NULL;
    Py_XDECREF(par_all_commit_direct);
    par_all_commit_direct = NULL;
    Py_XDECREF(par_commit_data);
    par_commit_data = NULL;
    Py_XDECREF(par_page_count);
    par_page_count = NULL;
    Py_XDECREF(par_continue_mode_enable);
    par_continue_mode_enable = NULL;
    Py_XDECREF(par_timestep_file);
    par_timestep_file = NULL;
    Py_XDECREF(par_timestep_add_mode);
    par_timestep_add_mode = NULL;
    Py_XDECREF(par_timestep_key_dire);
    par_timestep_key_dire = NULL;
    Py_XDECREF(par_all_user_full_timestep_dict);
    par_all_user_full_timestep_dict = NULL;
    Py_XDECREF(par_all_commit_full_timestep_dict);
    par_all_commit_full_timestep_dict = NULL;
    Py_XDECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    CHECK_OBJECT(var_sleep);
    Py_DECREF(var_sleep);
    var_sleep = NULL;
    Py_XDECREF(var_randint);
    var_randint = NULL;
    Py_XDECREF(var_replay_page_now);
    var_replay_page_now = NULL;
    Py_XDECREF(var_ua);
    var_ua = NULL;
    Py_XDECREF(var_replies_full_url);
    var_replies_full_url = NULL;
    Py_XDECREF(var_replies_get_proxy);
    var_replies_get_proxy = NULL;
    Py_XDECREF(var_ua_str);
    var_ua_str = NULL;
    Py_XDECREF(var_replies);
    var_replies = NULL;
    Py_XDECREF(var_sleep_seconds);
    var_sleep_seconds = NULL;
    Py_XDECREF(var_replies_json);
    var_replies_json = NULL;
    Py_XDECREF(var_replies_data);
    var_replies_data = NULL;
    Py_XDECREF(var_reply_index);
    var_reply_index = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

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


static PyObject *impl_api_commit_get$$$function__7_commit_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_continue_mode_enable = python_pars[0];
    PyObject *par_video_oid = python_pars[1];
    PyObject *par_commit_all = python_pars[2];
    PyObject *par_commit_index = python_pars[3];
    PyObject *par_reply_ana_flag = python_pars[4];
    PyObject *par_root_rid = python_pars[5];
    PyObject *par_all_user_dict = python_pars[6];
    PyObject *par_all_commit_direct = python_pars[7];
    PyObject *par_collect_time_step = python_pars[8];
    PyObject *par_is_top = python_pars[9];
    PyObject *par_is_list = python_pars[10];
    PyObject *par_is_hot = python_pars[11];
    PyObject *par_timestep_file = python_pars[12];
    PyObject *par_timestep_add_mode = python_pars[13];
    PyObject *par_timestep_key_dire = python_pars[14];
    PyObject *par_all_user_full_timestep_dict = python_pars[15];
    PyObject *par_all_commit_full_timestep_dict = python_pars[16];
    PyObject *par_cookie_dict = python_pars[17];
    PyObject *par_commit_db_client = python_pars[18];
    PyObject *par_user_db_client = python_pars[19];
    PyObject *par_db_mode = python_pars[20];
    PyObject *par_db_error_to_local = python_pars[21];
    PyObject *var_has_replies = NULL;
    PyObject *var_current_commit = NULL;
    PyObject *var_reply_id = NULL;
    PyObject *var_member_id = NULL;
    PyObject *var_like_number = NULL;
    PyObject *var_fans_detail = NULL;
    PyObject *var_fans_level = NULL;
    PyObject *var_post_time_step = NULL;
    PyObject *var_member_data = NULL;
    PyObject *var_user_name = NULL;
    PyObject *var_sex = NULL;
    PyObject *var_sign = NULL;
    PyObject *var_avatar_adress = NULL;
    PyObject *var_offical_data = NULL;
    PyObject *var_offical_type = NULL;
    PyObject *var_offical_desctrion = NULL;
    PyObject *var_level_data = NULL;
    PyObject *var_user_level = NULL;
    PyObject *var_nameplate_data = NULL;
    PyObject *var_nameplate_kind = NULL;
    PyObject *var_nameplate_name = NULL;
    PyObject *var_nameplate_image = NULL;
    PyObject *var_nameplate_image_small = NULL;
    PyObject *var_nameplate_level = NULL;
    PyObject *var_nameplate_condition = NULL;
    PyObject *var_has_nameplate = NULL;
    PyObject *var_vip_data = NULL;
    PyObject *var_vip_type = NULL;
    PyObject *var_vip_due_timestep = NULL;
    PyObject *var_has_vip = NULL;
    PyObject *var_message_data = NULL;
    PyObject *var_message = NULL;
    PyObject *var_commit_user_info = NULL;
    PyObject *var_key = NULL;
    PyObject *var_last_time_step_found = NULL;
    PyObject *var_last_user_dire_timestep_list = NULL;
    PyObject *var_target_timestep_index = NULL;
    PyObject *var_target_timestep = NULL;
    PyObject *var_last_time_step_user_dire = NULL;
    PyObject *var_test_last_time_step_user_dire = NULL;
    PyObject *var_last_time_step = NULL;
    PyObject *var_last_all_user_dire_file_name = NULL;
    PyObject *var_last_all_user_dire_file = NULL;
    PyObject *var_found_old_data = NULL;
    PyObject *var_replies_data = NULL;
    PyObject *var_page_count = NULL;
    PyObject *var_commit_info = NULL;
    PyObject *var_last_comment_dire_timestep_list = NULL;
    PyObject *var_last_time_step_comment_dire = NULL;
    PyObject *var_test_last_time_step_comment_dire = NULL;
    PyObject *var_last_all_dire_file_name = NULL;
    PyObject *var_last_all_dire_file = NULL;
    PyObject *var_last_commit_dire = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_bf1283372902174afa8fadb130e17256;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf1283372902174afa8fadb130e17256 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        assert(var_has_replies == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_has_replies = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_bf1283372902174afa8fadb130e17256)) {
        Py_XDECREF(cache_frame_bf1283372902174afa8fadb130e17256);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf1283372902174afa8fadb130e17256 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf1283372902174afa8fadb130e17256 = MAKE_FUNCTION_FRAME(codeobj_bf1283372902174afa8fadb130e17256, module_api_commit_get, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_bf1283372902174afa8fadb130e17256->m_type_description == NULL);
    frame_bf1283372902174afa8fadb130e17256 = cache_frame_bf1283372902174afa8fadb130e17256;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_bf1283372902174afa8fadb130e17256);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_bf1283372902174afa8fadb130e17256) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_tmp_condition_result_1_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_commit_index);
        tmp_compexpr_left_1 = par_commit_index;
        tmp_compexpr_right_1 = mod_consts[110];
        tmp_tmp_condition_result_1_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_1, tmp_compexpr_right_1);
        if (tmp_tmp_condition_result_1_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_1_object_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_1_object_1);

            exception_lineno = 184;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_1_object_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(par_commit_all);
        tmp_assign_source_2 = par_commit_all;
        assert(var_current_commit == NULL);
        Py_INCREF(tmp_assign_source_2);
        var_current_commit = tmp_assign_source_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_is_list);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_is_list);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_commit_all);
        tmp_expression_name_1 = par_commit_all;
        CHECK_OBJECT(par_commit_index);
        tmp_subscript_name_1 = par_commit_index;
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_current_commit == NULL);
        var_current_commit = tmp_assign_source_3;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_unicode_arg_1;
        CHECK_OBJECT(par_commit_all);
        tmp_expression_name_2 = par_commit_all;
        CHECK_OBJECT(par_commit_index);
        tmp_unicode_arg_1 = par_commit_index;
        tmp_subscript_name_2 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_subscript_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        Py_DECREF(tmp_subscript_name_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_current_commit == NULL);
        var_current_commit = tmp_assign_source_4;
    }
    branch_end_2:;
    branch_end_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_3 = var_current_commit;
        tmp_subscript_name_3 = mod_consts[112];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reply_id == NULL);
        var_reply_id = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_operand_name_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_continue_mode_enable);
        tmp_and_left_value_1 = par_continue_mode_enable;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_reply_id);
        tmp_compexpr_left_2 = var_reply_id;
        CHECK_OBJECT(par_all_commit_direct);
        tmp_called_instance_1 = par_all_commit_direct;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 196;
        tmp_compexpr_right_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[113]);
        if (tmp_compexpr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_2, tmp_compexpr_left_2);
        Py_DECREF(tmp_compexpr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        tmp_operand_name_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_name_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(par_reply_ana_flag);
        tmp_compexpr_left_3 = par_reply_ana_flag;
        tmp_compexpr_right_3 = Py_False;
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_int_arg_2;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_current_commit;
        tmp_subscript_name_4 = mod_consts[114];
        tmp_int_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_int_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = PyNumber_Int(tmp_int_arg_2);
        Py_DECREF(tmp_int_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_root_rid;
            assert(old != NULL);
            par_root_rid = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[110];
        {
            PyObject *old = par_root_rid;
            assert(old != NULL);
            par_root_rid = tmp_assign_source_7;
            Py_INCREF(par_root_rid);
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    {
        PyObject *tmp_value_name_1;
        PyObject *tmp_operand_name_2;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        CHECK_OBJECT(par_reply_ana_flag);
        tmp_and_left_value_2 = par_reply_ana_flag;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_root_rid);
        tmp_compexpr_left_4 = par_root_rid;
        CHECK_OBJECT(var_reply_id);
        tmp_compexpr_right_4 = var_reply_id;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_4, tmp_compexpr_right_4);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_operand_name_2 = tmp_and_left_value_2;
        and_end_2:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_2);
        Py_DECREF(tmp_operand_name_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_value_name_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_value_name_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_int_arg_3;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = var_current_commit;
        tmp_subscript_name_5 = mod_consts[17];
        tmp_int_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_int_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = PyNumber_Int(tmp_int_arg_3);
        Py_DECREF(tmp_int_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_member_id == NULL);
        var_member_id = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_int_arg_4;
        PyObject *tmp_expression_name_6;
        PyObject *tmp_subscript_name_6;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_6 = var_current_commit;
        tmp_subscript_name_6 = mod_consts[25];
        tmp_int_arg_4 = LOOKUP_SUBSCRIPT(tmp_expression_name_6, tmp_subscript_name_6);
        if (tmp_int_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = PyNumber_Int(tmp_int_arg_4);
        Py_DECREF(tmp_int_arg_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_like_number == NULL);
        var_like_number = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_called_instance_2;
        tmp_compexpr_left_5 = mod_consts[115];
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = var_current_commit;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 212;
        tmp_compexpr_right_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[113]);
        if (tmp_compexpr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_5, tmp_compexpr_left_5);
        Py_DECREF(tmp_compexpr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_name_7;
        PyObject *tmp_subscript_name_7;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_7 = var_current_commit;
        tmp_subscript_name_7 = mod_consts[115];
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_name_7, tmp_subscript_name_7);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fans_detail == NULL);
        var_fans_detail = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_int_arg_5;
        PyObject *tmp_expression_name_8;
        PyObject *tmp_subscript_name_8;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_8 = var_current_commit;
        tmp_subscript_name_8 = mod_consts[116];
        tmp_int_arg_5 = LOOKUP_SUBSCRIPT(tmp_expression_name_8, tmp_subscript_name_8);
        if (tmp_int_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = PyNumber_Int(tmp_int_arg_5);
        Py_DECREF(tmp_int_arg_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fans_level == NULL);
        var_fans_level = tmp_assign_source_11;
    }
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = mod_consts[110];
        assert(var_fans_detail == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_fans_detail = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = mod_consts[110];
        assert(var_fans_level == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_fans_level = tmp_assign_source_13;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_9;
        PyObject *tmp_subscript_name_9;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_9 = var_current_commit;
        tmp_subscript_name_9 = mod_consts[14];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_9, tmp_subscript_name_9);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_post_time_step == NULL);
        var_post_time_step = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_name_10;
        PyObject *tmp_subscript_name_10;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_10 = var_current_commit;
        tmp_subscript_name_10 = mod_consts[117];
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_name_10, tmp_subscript_name_10);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_member_data == NULL);
        var_member_data = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_expression_name_11;
        PyObject *tmp_subscript_name_11;
        CHECK_OBJECT(var_member_data);
        tmp_expression_name_11 = var_member_data;
        tmp_subscript_name_11 = mod_consts[118];
        tmp_assign_source_16 = LOOKUP_SUBSCRIPT(tmp_expression_name_11, tmp_subscript_name_11);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_user_name == NULL);
        var_user_name = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_expression_name_12;
        PyObject *tmp_subscript_name_12;
        CHECK_OBJECT(var_member_data);
        tmp_expression_name_12 = var_member_data;
        tmp_subscript_name_12 = mod_consts[119];
        tmp_assign_source_17 = LOOKUP_SUBSCRIPT(tmp_expression_name_12, tmp_subscript_name_12);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sex == NULL);
        var_sex = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_expression_name_13;
        PyObject *tmp_subscript_name_13;
        CHECK_OBJECT(var_member_data);
        tmp_expression_name_13 = var_member_data;
        tmp_subscript_name_13 = mod_consts[120];
        tmp_assign_source_18 = LOOKUP_SUBSCRIPT(tmp_expression_name_13, tmp_subscript_name_13);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_sign == NULL);
        var_sign = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_expression_name_14;
        PyObject *tmp_subscript_name_14;
        CHECK_OBJECT(var_member_data);
        tmp_expression_name_14 = var_member_data;
        tmp_subscript_name_14 = mod_consts[121];
        tmp_assign_source_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_14, tmp_subscript_name_14);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_avatar_adress == NULL);
        var_avatar_adress = tmp_assign_source_19;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_called_instance_3;
        tmp_compexpr_left_6 = mod_consts[122];
        CHECK_OBJECT(var_member_data);
        tmp_called_instance_3 = var_member_data;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 234;
        tmp_compexpr_right_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[113]);
        if (tmp_compexpr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_6, tmp_compexpr_left_6);
        Py_DECREF(tmp_compexpr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_expression_name_15;
        PyObject *tmp_subscript_name_15;
        if (var_member_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_15 = var_member_data;
        tmp_subscript_name_15 = mod_consts[122];
        tmp_assign_source_20 = LOOKUP_SUBSCRIPT(tmp_expression_name_15, tmp_subscript_name_15);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_offical_data == NULL);
        var_offical_data = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_name_16;
        PyObject *tmp_subscript_name_16;
        CHECK_OBJECT(var_offical_data);
        tmp_expression_name_16 = var_offical_data;
        tmp_subscript_name_16 = mod_consts[124];
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT(tmp_expression_name_16, tmp_subscript_name_16);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_offical_type == NULL);
        var_offical_type = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_called_instance_4;
        tmp_compexpr_left_7 = mod_consts[15];
        CHECK_OBJECT(var_offical_data);
        tmp_called_instance_4 = var_offical_data;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 237;
        tmp_compexpr_right_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[113]);
        if (tmp_compexpr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_7, tmp_compexpr_left_7);
        Py_DECREF(tmp_compexpr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_name_17;
        PyObject *tmp_subscript_name_17;
        if (var_offical_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[125]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_17 = var_offical_data;
        tmp_subscript_name_17 = mod_consts[15];
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tmp_expression_name_17, tmp_subscript_name_17);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_offical_desctrion == NULL);
        var_offical_desctrion = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_tmp_condition_result_8_object_1;
        int tmp_truth_name_3;
        CHECK_OBJECT(var_offical_desctrion);
        tmp_compexpr_left_8 = var_offical_desctrion;
        tmp_compexpr_right_8 = mod_consts[126];
        tmp_tmp_condition_result_8_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_8, tmp_compexpr_right_8);
        if (tmp_tmp_condition_result_8_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_tmp_condition_result_8_object_1);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_8_object_1);

            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_8_object_1);
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = mod_consts[110];
        {
            PyObject *old = var_offical_desctrion;
            assert(old != NULL);
            var_offical_desctrion = tmp_assign_source_23;
            Py_INCREF(var_offical_desctrion);
            Py_DECREF(old);
        }

    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = mod_consts[110];
        assert(var_offical_desctrion == NULL);
        Py_INCREF(tmp_assign_source_24);
        var_offical_desctrion = tmp_assign_source_24;
    }
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[110];
        assert(var_offical_type == NULL);
        Py_INCREF(tmp_assign_source_25);
        var_offical_type = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[110];
        assert(var_offical_desctrion == NULL);
        Py_INCREF(tmp_assign_source_26);
        var_offical_desctrion = tmp_assign_source_26;
    }
    branch_end_6:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_name_18;
        PyObject *tmp_subscript_name_18;
        if (var_member_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_18 = var_member_data;
        tmp_subscript_name_18 = mod_consts[127];
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_name_18, tmp_subscript_name_18);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_level_data == NULL);
        var_level_data = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_expression_name_19;
        PyObject *tmp_subscript_name_19;
        CHECK_OBJECT(var_level_data);
        tmp_expression_name_19 = var_level_data;
        tmp_subscript_name_19 = mod_consts[128];
        tmp_assign_source_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_19, tmp_subscript_name_19);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_user_level == NULL);
        var_user_level = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        PyObject *tmp_called_instance_5;
        tmp_compexpr_left_9 = mod_consts[129];
        if (var_member_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_5 = var_member_data;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 250;
        tmp_compexpr_right_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[113]);
        if (tmp_compexpr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_9, tmp_compexpr_left_9);
        Py_DECREF(tmp_compexpr_right_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_expression_name_20;
        PyObject *tmp_subscript_name_20;
        if (var_member_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_20 = var_member_data;
        tmp_subscript_name_20 = mod_consts[129];
        tmp_assign_source_29 = LOOKUP_SUBSCRIPT(tmp_expression_name_20, tmp_subscript_name_20);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_data == NULL);
        var_nameplate_data = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_expression_name_21;
        PyObject *tmp_subscript_name_21;
        CHECK_OBJECT(var_nameplate_data);
        tmp_expression_name_21 = var_nameplate_data;
        tmp_subscript_name_21 = mod_consts[130];
        tmp_assign_source_30 = LOOKUP_SUBSCRIPT(tmp_expression_name_21, tmp_subscript_name_21);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_kind == NULL);
        var_nameplate_kind = tmp_assign_source_30;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_compexpr_left_10;
        PyObject *tmp_compexpr_right_10;
        PyObject *tmp_tmp_condition_result_10_object_1;
        int tmp_truth_name_4;
        CHECK_OBJECT(var_nameplate_kind);
        tmp_compexpr_left_10 = var_nameplate_kind;
        tmp_compexpr_right_10 = mod_consts[45];
        tmp_tmp_condition_result_10_object_1 = RICH_COMPARE_NE_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_10, tmp_compexpr_right_10);
        if (tmp_tmp_condition_result_10_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_tmp_condition_result_10_object_1);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_10_object_1);

            exception_lineno = 255;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_10_object_1);
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_expression_name_22;
        PyObject *tmp_subscript_name_22;
        CHECK_OBJECT(var_nameplate_data);
        tmp_expression_name_22 = var_nameplate_data;
        tmp_subscript_name_22 = mod_consts[131];
        tmp_assign_source_31 = LOOKUP_SUBSCRIPT(tmp_expression_name_22, tmp_subscript_name_22);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_name == NULL);
        var_nameplate_name = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_expression_name_23;
        PyObject *tmp_subscript_name_23;
        CHECK_OBJECT(var_nameplate_data);
        tmp_expression_name_23 = var_nameplate_data;
        tmp_subscript_name_23 = mod_consts[132];
        tmp_assign_source_32 = LOOKUP_SUBSCRIPT(tmp_expression_name_23, tmp_subscript_name_23);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_image == NULL);
        var_nameplate_image = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_expression_name_24;
        PyObject *tmp_subscript_name_24;
        CHECK_OBJECT(var_nameplate_data);
        tmp_expression_name_24 = var_nameplate_data;
        tmp_subscript_name_24 = mod_consts[133];
        tmp_assign_source_33 = LOOKUP_SUBSCRIPT(tmp_expression_name_24, tmp_subscript_name_24);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_image_small == NULL);
        var_nameplate_image_small = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_name_25;
        PyObject *tmp_subscript_name_25;
        CHECK_OBJECT(var_nameplate_data);
        tmp_expression_name_25 = var_nameplate_data;
        tmp_subscript_name_25 = mod_consts[134];
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tmp_expression_name_25, tmp_subscript_name_25);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_level == NULL);
        var_nameplate_level = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_name_26;
        PyObject *tmp_subscript_name_26;
        CHECK_OBJECT(var_nameplate_data);
        tmp_expression_name_26 = var_nameplate_data;
        tmp_subscript_name_26 = mod_consts[135];
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tmp_expression_name_26, tmp_subscript_name_26);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nameplate_condition == NULL);
        var_nameplate_condition = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = mod_consts[136];
        assert(var_has_nameplate == NULL);
        Py_INCREF(tmp_assign_source_36);
        var_has_nameplate = tmp_assign_source_36;
    }
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = mod_consts[101];
        assert(var_has_nameplate == NULL);
        Py_INCREF(tmp_assign_source_37);
        var_has_nameplate = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = mod_consts[110];
        {
            PyObject *old = var_nameplate_kind;
            assert(old != NULL);
            var_nameplate_kind = tmp_assign_source_38;
            Py_INCREF(var_nameplate_kind);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = mod_consts[110];
        assert(var_nameplate_name == NULL);
        Py_INCREF(tmp_assign_source_39);
        var_nameplate_name = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        tmp_assign_source_40 = mod_consts[110];
        assert(var_nameplate_image == NULL);
        Py_INCREF(tmp_assign_source_40);
        var_nameplate_image = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = mod_consts[110];
        assert(var_nameplate_image_small == NULL);
        Py_INCREF(tmp_assign_source_41);
        var_nameplate_image_small = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = mod_consts[110];
        assert(var_nameplate_level == NULL);
        Py_INCREF(tmp_assign_source_42);
        var_nameplate_level = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        tmp_assign_source_43 = mod_consts[110];
        assert(var_nameplate_condition == NULL);
        Py_INCREF(tmp_assign_source_43);
        var_nameplate_condition = tmp_assign_source_43;
    }
    branch_end_10:;
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = mod_consts[101];
        assert(var_has_nameplate == NULL);
        Py_INCREF(tmp_assign_source_44);
        var_has_nameplate = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = mod_consts[110];
        assert(var_nameplate_kind == NULL);
        Py_INCREF(tmp_assign_source_45);
        var_nameplate_kind = tmp_assign_source_45;
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = mod_consts[110];
        assert(var_nameplate_name == NULL);
        Py_INCREF(tmp_assign_source_46);
        var_nameplate_name = tmp_assign_source_46;
    }
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = mod_consts[110];
        assert(var_nameplate_image == NULL);
        Py_INCREF(tmp_assign_source_47);
        var_nameplate_image = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = mod_consts[110];
        assert(var_nameplate_image_small == NULL);
        Py_INCREF(tmp_assign_source_48);
        var_nameplate_image_small = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = mod_consts[110];
        assert(var_nameplate_level == NULL);
        Py_INCREF(tmp_assign_source_49);
        var_nameplate_level = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = mod_consts[110];
        assert(var_nameplate_condition == NULL);
        Py_INCREF(tmp_assign_source_50);
        var_nameplate_condition = tmp_assign_source_50;
    }
    branch_end_9:;
    {
        bool tmp_condition_result_11;
        PyObject *tmp_compexpr_left_11;
        PyObject *tmp_compexpr_right_11;
        PyObject *tmp_called_instance_6;
        tmp_compexpr_left_11 = mod_consts[137];
        if (var_member_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_6 = var_member_data;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 283;
        tmp_compexpr_right_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[113]);
        if (tmp_compexpr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_11, tmp_compexpr_left_11);
        Py_DECREF(tmp_compexpr_right_11);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_expression_name_27;
        PyObject *tmp_subscript_name_27;
        if (var_member_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_27 = var_member_data;
        tmp_subscript_name_27 = mod_consts[137];
        tmp_assign_source_51 = LOOKUP_SUBSCRIPT(tmp_expression_name_27, tmp_subscript_name_27);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vip_data == NULL);
        var_vip_data = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_int_arg_6;
        PyObject *tmp_expression_name_28;
        PyObject *tmp_subscript_name_28;
        CHECK_OBJECT(var_vip_data);
        tmp_expression_name_28 = var_vip_data;
        tmp_subscript_name_28 = mod_consts[138];
        tmp_int_arg_6 = LOOKUP_SUBSCRIPT(tmp_expression_name_28, tmp_subscript_name_28);
        if (tmp_int_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = PyNumber_Int(tmp_int_arg_6);
        Py_DECREF(tmp_int_arg_6);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vip_type == NULL);
        var_vip_type = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_int_arg_7;
        PyObject *tmp_expression_name_29;
        PyObject *tmp_subscript_name_29;
        CHECK_OBJECT(var_vip_data);
        tmp_expression_name_29 = var_vip_data;
        tmp_subscript_name_29 = mod_consts[139];
        tmp_int_arg_7 = LOOKUP_SUBSCRIPT(tmp_expression_name_29, tmp_subscript_name_29);
        if (tmp_int_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = PyNumber_Int(tmp_int_arg_7);
        Py_DECREF(tmp_int_arg_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vip_due_timestep == NULL);
        var_vip_due_timestep = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = mod_consts[136];
        assert(var_has_vip == NULL);
        Py_INCREF(tmp_assign_source_54);
        var_has_vip = tmp_assign_source_54;
    }
    goto branch_end_11;
    branch_no_11:;
    {
        PyObject *tmp_assign_source_55;
        tmp_assign_source_55 = mod_consts[101];
        assert(var_has_vip == NULL);
        Py_INCREF(tmp_assign_source_55);
        var_has_vip = tmp_assign_source_55;
    }
    {
        PyObject *tmp_assign_source_56;
        tmp_assign_source_56 = mod_consts[110];
        assert(var_vip_type == NULL);
        Py_INCREF(tmp_assign_source_56);
        var_vip_type = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = mod_consts[110];
        assert(var_vip_due_timestep == NULL);
        Py_INCREF(tmp_assign_source_57);
        var_vip_due_timestep = tmp_assign_source_57;
    }
    branch_end_11:;
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_expression_name_30;
        PyObject *tmp_subscript_name_30;
        if (var_current_commit == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[111]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_30 = var_current_commit;
        tmp_subscript_name_30 = mod_consts[140];
        tmp_assign_source_58 = LOOKUP_SUBSCRIPT(tmp_expression_name_30, tmp_subscript_name_30);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message_data == NULL);
        var_message_data = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_expression_name_31;
        PyObject *tmp_subscript_name_31;
        CHECK_OBJECT(var_message_data);
        tmp_expression_name_31 = var_message_data;
        tmp_subscript_name_31 = mod_consts[141];
        tmp_assign_source_59 = LOOKUP_SUBSCRIPT(tmp_expression_name_31, tmp_subscript_name_31);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_message == NULL);
        var_message = tmp_assign_source_59;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_compexpr_left_12;
        PyObject *tmp_compexpr_right_12;
        PyObject *tmp_called_instance_7;
        CHECK_OBJECT(var_member_id);
        tmp_compexpr_left_12 = var_member_id;
        CHECK_OBJECT(par_all_user_dict);
        tmp_called_instance_7 = par_all_user_dict;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 299;
        tmp_compexpr_right_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[113]);
        if (tmp_compexpr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_12, tmp_compexpr_left_12);
        Py_DECREF(tmp_compexpr_right_12);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[142];
        CHECK_OBJECT(var_user_name);
        tmp_dict_value_1 = var_user_name;
        tmp_assign_source_60 = _PyDict_NewPresized( 20 );
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[120];
        CHECK_OBJECT(var_sign);
        tmp_dict_value_1 = var_sign;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[143];
        CHECK_OBJECT(var_avatar_adress);
        tmp_dict_value_1 = var_avatar_adress;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[119];
        CHECK_OBJECT(var_sex);
        tmp_dict_value_1 = var_sex;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[144];
        CHECK_OBJECT(var_user_level);
        tmp_dict_value_1 = var_user_level;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[145];
        if (var_has_nameplate == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[145]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 307;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_has_nameplate;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[146];
        if (var_nameplate_kind == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[146]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 308;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_nameplate_kind;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[147];
        if (var_nameplate_name == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[147]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 309;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_nameplate_name;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[148];
        if (var_nameplate_image == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[148]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 310;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_nameplate_image;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[149];
        if (var_nameplate_image_small == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 311;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_nameplate_image_small;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[150];
        if (var_nameplate_level == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[150]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 312;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_nameplate_level;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[151];
        if (var_nameplate_condition == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_nameplate_condition;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[152];
        CHECK_OBJECT(var_has_vip);
        tmp_dict_value_1 = var_has_vip;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[153];
        CHECK_OBJECT(var_vip_type);
        tmp_dict_value_1 = var_vip_type;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[115];
        CHECK_OBJECT(var_fans_detail);
        tmp_dict_value_1 = var_fans_detail;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[154];
        CHECK_OBJECT(var_fans_level);
        tmp_dict_value_1 = var_fans_level;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[155];
        CHECK_OBJECT(var_offical_type);
        tmp_dict_value_1 = var_offical_type;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[156];
        if (var_offical_desctrion == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[156]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 319;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_1;
        }

        tmp_dict_value_1 = var_offical_desctrion;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[157];
        CHECK_OBJECT(var_vip_due_timestep);
        tmp_dict_value_1 = var_vip_due_timestep;
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[158];
        tmp_dict_value_1 = mod_consts[101];
        tmp_res = PyDict_SetItem(tmp_assign_source_60, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_60);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        assert(var_commit_user_info == NULL);
        var_commit_user_info = tmp_assign_source_60;
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_5;
        CHECK_OBJECT(par_db_mode);
        tmp_truth_name_5 = CHECK_IF_TRUE(par_db_mode);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    // Tried code:
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT(par_user_db_client);
        tmp_called_instance_8 = par_user_db_client;
        CHECK_OBJECT(var_commit_user_info);
        tmp_args_element_name_1 = var_commit_user_info;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 328;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[159], tmp_args_element_name_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bf1283372902174afa8fadb130e17256, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bf1283372902174afa8fadb130e17256, exception_keeper_lineno_1);
    }

    NORMALIZE_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    ATTACH_TRACEBACK_TO_EXCEPTION_VALUE(exception_keeper_value_1, exception_keeper_tb_1);
    PUBLISH_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_2;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_1 != NULL);
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 330;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, mod_consts[160]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_6;
        CHECK_OBJECT(par_db_error_to_local);
        tmp_truth_name_6 = CHECK_IF_TRUE(par_db_error_to_local);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_14 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_call_result_3;
        tmp_called_name_2 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_2 != NULL);
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 332;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_2, mod_consts[161]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_61;
        tmp_assign_source_61 = Py_False;
        {
            PyObject *old = par_db_mode;
            assert(old != NULL);
            par_db_mode = tmp_assign_source_61;
            Py_INCREF(par_db_mode);
            Py_DECREF(old);
        }

    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_4;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_3 != NULL);
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 335;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[162]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_5;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[163]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[163]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 336;
        tmp_call_result_5 = CALL_FUNCTION_NO_ARGS(tmp_called_name_4);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_end_14:;
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
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_15;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        int tmp_truth_name_7;
        PyObject *tmp_compexpr_left_13;
        PyObject *tmp_compexpr_right_13;
        CHECK_OBJECT(par_timestep_add_mode);
        tmp_truth_name_7 = CHECK_IF_TRUE(par_timestep_add_mode);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        if (par_db_mode == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[164]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_13 = par_db_mode;
        tmp_compexpr_right_13 = Py_False;
        tmp_and_right_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_13, tmp_compexpr_right_13);
        if (tmp_and_right_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_15 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
        assert(tmp_condition_result_15 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_15:;
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_9;
        if (var_commit_user_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[165]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = var_commit_user_info;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 339;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[113]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_62;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_63 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_63 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 339;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_63;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_64 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_64;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_compexpr_left_14;
        PyObject *tmp_compexpr_right_14;
        PyObject *tmp_tmp_condition_result_16_object_1;
        int tmp_truth_name_8;
        CHECK_OBJECT(var_key);
        tmp_compexpr_left_14 = var_key;
        tmp_compexpr_right_14 = mod_consts[166];
        tmp_tmp_condition_result_16_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_14, tmp_compexpr_right_14);
        if (tmp_tmp_condition_result_16_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_tmp_condition_result_16_object_1);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_16_object_1);

            exception_lineno = 342;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_16 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_16_object_1);
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    goto loop_start_1;
    branch_no_16:;
    {
        PyObject *tmp_assign_source_65;
        tmp_assign_source_65 = Py_False;
        {
            PyObject *old = var_last_time_step_found;
            var_last_time_step_found = tmp_assign_source_65;
            Py_INCREF(var_last_time_step_found);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_instance_10;
        if (par_all_user_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_10 = par_all_user_full_timestep_dict;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 349;
        tmp_list_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[113]);
        if (tmp_list_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_66 = MAKE_LIST(tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_user_dire_timestep_list;
            var_last_user_dire_timestep_list = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_left_name_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT(var_last_user_dire_timestep_list);
        tmp_len_arg_1 = var_last_user_dire_timestep_list;
        tmp_left_name_1 = BUILTIN_LEN(tmp_len_arg_1);
        assert(!(tmp_left_name_1 == NULL));
        tmp_right_name_1 = mod_consts[75];
        tmp_assign_source_67 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_name_1, tmp_right_name_1);
        Py_DECREF(tmp_left_name_1);
        assert(!(tmp_assign_source_67 == NULL));
        {
            PyObject *old = var_target_timestep_index;
            var_target_timestep_index = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_expression_name_32;
        PyObject *tmp_subscript_name_32;
        if (var_last_user_dire_timestep_list == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[167]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_32 = var_last_user_dire_timestep_list;
        CHECK_OBJECT(var_target_timestep_index);
        tmp_subscript_name_32 = var_target_timestep_index;
        tmp_assign_source_68 = LOOKUP_SUBSCRIPT(tmp_expression_name_32, tmp_subscript_name_32);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_target_timestep;
            var_target_timestep = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_expression_name_33;
        PyObject *tmp_subscript_name_33;
        if (par_all_user_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_33 = par_all_user_full_timestep_dict;
        CHECK_OBJECT(var_target_timestep);
        tmp_subscript_name_33 = var_target_timestep;
        tmp_assign_source_69 = LOOKUP_SUBSCRIPT(tmp_expression_name_33, tmp_subscript_name_33);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_time_step_user_dire;
            var_last_time_step_user_dire = tmp_assign_source_69;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_17;
        PyObject *tmp_compexpr_left_15;
        PyObject *tmp_compexpr_right_15;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_called_instance_11;
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_2 = var_member_id;
        tmp_compexpr_left_15 = PyObject_Unicode(tmp_unicode_arg_2);
        if (tmp_compexpr_left_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_last_time_step_user_dire);
        tmp_called_instance_11 = var_last_time_step_user_dire;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 358;
        tmp_compexpr_right_15 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[113]);
        if (tmp_compexpr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_15);

            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_15, tmp_compexpr_left_15);
        Py_DECREF(tmp_compexpr_left_15);
        Py_DECREF(tmp_compexpr_right_15);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_17 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_expression_name_34;
        PyObject *tmp_subscript_name_34;
        PyObject *tmp_unicode_arg_3;
        if (var_last_time_step_user_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_34 = var_last_time_step_user_dire;
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_3 = var_member_id;
        tmp_subscript_name_34 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_subscript_name_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_70 = LOOKUP_SUBSCRIPT(tmp_expression_name_34, tmp_subscript_name_34);
        Py_DECREF(tmp_subscript_name_34);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_test_last_time_step_user_dire;
            var_test_last_time_step_user_dire = tmp_assign_source_70;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_expression_name_35;
        PyObject *tmp_subscript_name_35;
        CHECK_OBJECT(var_test_last_time_step_user_dire);
        tmp_expression_name_35 = var_test_last_time_step_user_dire;
        CHECK_OBJECT(var_key);
        tmp_subscript_name_35 = var_key;
        tmp_assign_source_71 = LOOKUP_SUBSCRIPT(tmp_expression_name_35, tmp_subscript_name_35);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_test_last_time_step_user_dire;
            assert(old != NULL);
            var_test_last_time_step_user_dire = tmp_assign_source_71;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_18;
        PyObject *tmp_compexpr_left_16;
        PyObject *tmp_compexpr_right_16;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(var_test_last_time_step_user_dire);
        tmp_type_arg_1 = var_test_last_time_step_user_dire;
        tmp_compexpr_left_16 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_compexpr_left_16 == NULL));
        tmp_compexpr_right_16 = (PyObject *)&PyDict_Type;
        tmp_condition_result_18 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_16, tmp_compexpr_right_16);
        Py_DECREF(tmp_compexpr_left_16);
        assert(!(tmp_condition_result_18 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_18 == NUITKA_BOOL_TRUE) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
        assert(tmp_condition_result_18 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_18:;
    {
        bool tmp_condition_result_19;
        PyObject *tmp_compexpr_left_17;
        PyObject *tmp_compexpr_right_17;
        PyObject *tmp_called_instance_12;
        tmp_compexpr_left_17 = mod_consts[170];
        CHECK_OBJECT(var_test_last_time_step_user_dire);
        tmp_called_instance_12 = var_test_last_time_step_user_dire;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 364;
        tmp_compexpr_right_17 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[113]);
        if (tmp_compexpr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_17, tmp_compexpr_left_17);
        Py_DECREF(tmp_compexpr_right_17);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_19 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_expression_name_36;
        PyObject *tmp_subscript_name_36;
        if (var_test_last_time_step_user_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[171]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_36 = var_test_last_time_step_user_dire;
        tmp_subscript_name_36 = mod_consts[170];
        tmp_assign_source_72 = LOOKUP_SUBSCRIPT(tmp_expression_name_36, tmp_subscript_name_36);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_time_step;
            var_last_time_step = tmp_assign_source_72;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = Py_True;
        {
            PyObject *old = var_last_time_step_found;
            assert(old != NULL);
            var_last_time_step_found = tmp_assign_source_73;
            Py_INCREF(var_last_time_step_found);
            Py_DECREF(old);
        }

    }
    goto branch_end_19;
    branch_no_19:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        tmp_called_name_5 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_5 != NULL);
        tmp_left_name_3 = mod_consts[172];
        CHECK_OBJECT(var_key);
        tmp_right_name_2 = var_key;
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_2);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_3 = mod_consts[173];
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_3);
        Py_DECREF(tmp_left_name_2);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 369;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_end_19:;
    goto branch_end_18;
    branch_no_18:;
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_4;
        PyObject *tmp_left_name_5;
        PyObject *tmp_right_name_4;
        PyObject *tmp_right_name_5;
        tmp_called_name_6 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_6 != NULL);
        tmp_left_name_5 = mod_consts[172];
        CHECK_OBJECT(var_key);
        tmp_right_name_4 = var_key;
        tmp_left_name_4 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_5, tmp_right_name_4);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_5 = mod_consts[173];
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_4, tmp_right_name_5);
        Py_DECREF(tmp_left_name_4);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 372;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_end_18:;
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_called_name_7;
        PyObject *tmp_call_result_8;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        tmp_called_name_7 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_7 != NULL);
        tmp_left_name_7 = mod_consts[172];
        CHECK_OBJECT(var_key);
        tmp_right_name_6 = var_key;
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_7, tmp_right_name_6);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_7 = mod_consts[173];
        tmp_args_element_name_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_6, tmp_right_name_7);
        Py_DECREF(tmp_left_name_6);
        if (tmp_args_element_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 375;
        tmp_call_result_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_7, tmp_args_element_name_4);
        Py_DECREF(tmp_args_element_name_4);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_end_17:;
    {
        nuitka_bool tmp_condition_result_20;
        int tmp_truth_name_9;
        if (var_last_time_step_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_9 = CHECK_IF_TRUE(var_last_time_step_found);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_20 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        nuitka_bool tmp_condition_result_21;
        int tmp_truth_name_10;
        if (par_timestep_file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_10 = CHECK_IF_TRUE(par_timestep_file);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_21 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_21 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_left_name_8;
        PyObject *tmp_unicode_arg_4;
        PyObject *tmp_right_name_8;
        if (var_last_time_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_4 = var_last_time_step;
        tmp_left_name_8 = PyObject_Unicode(tmp_unicode_arg_4);
        if (tmp_left_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_8 = mod_consts[176];
        tmp_assign_source_74 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_8, tmp_right_name_8);
        Py_DECREF(tmp_left_name_8);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_all_user_dire_file_name;
            var_last_all_user_dire_file_name = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_encoding_1;
        CHECK_OBJECT(var_last_all_user_dire_file_name);
        tmp_open_filename_1 = var_last_all_user_dire_file_name;
        tmp_open_mode_1 = mod_consts[177];
        tmp_open_encoding_1 = mod_consts[64];
        tmp_assign_source_75 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, tmp_open_encoding_1, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_all_user_dire_file;
            var_last_all_user_dire_file = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_5;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_last_all_user_dire_file);
        tmp_args_element_name_5 = var_last_all_user_dire_file;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 390;
        tmp_assign_source_76 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[67], tmp_args_element_name_5);
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_time_step_user_dire;
            var_last_time_step_user_dire = tmp_assign_source_76;
            Py_XDECREF(old);
        }

    }
    branch_no_21:;
    {
        nuitka_bool tmp_condition_result_22;
        int tmp_truth_name_11;
        if (par_timestep_key_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_11 = CHECK_IF_TRUE(par_timestep_key_dire);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_22 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_expression_name_37;
        PyObject *tmp_subscript_name_37;
        PyObject *tmp_unicode_arg_5;
        if (par_all_user_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_37 = par_all_user_full_timestep_dict;
        if (var_last_time_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_5 = var_last_time_step;
        tmp_subscript_name_37 = PyObject_Unicode(tmp_unicode_arg_5);
        if (tmp_subscript_name_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_77 = LOOKUP_SUBSCRIPT(tmp_expression_name_37, tmp_subscript_name_37);
        Py_DECREF(tmp_subscript_name_37);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_time_step_user_dire;
            var_last_time_step_user_dire = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    branch_no_22:;
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_expression_name_38;
        PyObject *tmp_subscript_name_38;
        PyObject *tmp_unicode_arg_6;
        if (var_last_time_step_user_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_38 = var_last_time_step_user_dire;
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_6 = var_member_id;
        tmp_subscript_name_38 = PyObject_Unicode(tmp_unicode_arg_6);
        if (tmp_subscript_name_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_78 = LOOKUP_SUBSCRIPT(tmp_expression_name_38, tmp_subscript_name_38);
        Py_DECREF(tmp_subscript_name_38);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_time_step_user_dire;
            var_last_time_step_user_dire = tmp_assign_source_78;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_79;
        tmp_assign_source_79 = Py_True;
        {
            PyObject *old = var_found_old_data;
            var_found_old_data = tmp_assign_source_79;
            Py_INCREF(var_found_old_data);
            Py_XDECREF(old);
        }

    }
    goto branch_end_20;
    branch_no_20:;
    {
        bool tmp_condition_result_23;
        PyObject *tmp_compexpr_left_18;
        PyObject *tmp_compexpr_right_18;
        PyObject *tmp_unicode_arg_7;
        PyObject *tmp_called_instance_14;
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_7 = var_member_id;
        tmp_compexpr_left_18 = PyObject_Unicode(tmp_unicode_arg_7);
        if (tmp_compexpr_left_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_last_time_step_user_dire == NULL) {
            Py_DECREF(tmp_compexpr_left_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_called_instance_14 = var_last_time_step_user_dire;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 403;
        tmp_compexpr_right_18 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[113]);
        if (tmp_compexpr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_18);

            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_18, tmp_compexpr_left_18);
        Py_DECREF(tmp_compexpr_left_18);
        Py_DECREF(tmp_compexpr_right_18);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_23 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_23 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_expression_name_39;
        PyObject *tmp_subscript_name_39;
        PyObject *tmp_unicode_arg_8;
        if (var_last_time_step_user_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_39 = var_last_time_step_user_dire;
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 405;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_unicode_arg_8 = var_member_id;
        tmp_subscript_name_39 = PyObject_Unicode(tmp_unicode_arg_8);
        if (tmp_subscript_name_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_80 = LOOKUP_SUBSCRIPT(tmp_expression_name_39, tmp_subscript_name_39);
        Py_DECREF(tmp_subscript_name_39);
        if (tmp_assign_source_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_last_time_step_user_dire;
            var_last_time_step_user_dire = tmp_assign_source_80;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = Py_True;
        {
            PyObject *old = var_found_old_data;
            var_found_old_data = tmp_assign_source_81;
            Py_INCREF(var_found_old_data);
            Py_XDECREF(old);
        }

    }
    goto branch_end_23;
    branch_no_23:;
    {
        PyObject *tmp_called_name_8;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_left_name_9;
        PyObject *tmp_left_name_10;
        PyObject *tmp_right_name_9;
        PyObject *tmp_right_name_10;
        tmp_called_name_8 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_8 != NULL);
        tmp_left_name_10 = mod_consts[172];
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_right_name_9 = var_key;
        tmp_left_name_9 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_10, tmp_right_name_9);
        if (tmp_left_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_10 = mod_consts[179];
        tmp_args_element_name_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_9, tmp_right_name_10);
        Py_DECREF(tmp_left_name_9);
        if (tmp_args_element_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 408;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_8, tmp_args_element_name_6);
        Py_DECREF(tmp_args_element_name_6);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_9);
    }
    {
        PyObject *tmp_assign_source_82;
        tmp_assign_source_82 = Py_False;
        {
            PyObject *old = var_found_old_data;
            var_found_old_data = tmp_assign_source_82;
            Py_INCREF(var_found_old_data);
            Py_XDECREF(old);
        }

    }
    branch_end_23:;
    branch_end_20:;
    {
        nuitka_bool tmp_condition_result_24;
        int tmp_truth_name_12;
        if (var_found_old_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[180]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_truth_name_12 = CHECK_IF_TRUE(var_found_old_data);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_24 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 == NUITKA_BOOL_TRUE) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_compexpr_left_19;
        PyObject *tmp_compexpr_right_19;
        PyObject *tmp_expression_name_40;
        PyObject *tmp_subscript_name_40;
        PyObject *tmp_expression_name_41;
        PyObject *tmp_subscript_name_41;
        if (var_last_time_step_user_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[169]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_40 = var_last_time_step_user_dire;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_subscript_name_40 = var_key;
        tmp_compexpr_left_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_40, tmp_subscript_name_40);
        if (tmp_compexpr_left_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (var_commit_user_info == NULL) {
            Py_DECREF(tmp_compexpr_left_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[165]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_name_41 = var_commit_user_info;
        if (var_key == NULL) {
            Py_DECREF(tmp_compexpr_left_19);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_subscript_name_41 = var_key;
        tmp_compexpr_right_19 = LOOKUP_SUBSCRIPT(tmp_expression_name_41, tmp_subscript_name_41);
        if (tmp_compexpr_right_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_19);

            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_condition_result_25 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_19, tmp_compexpr_right_19);
        Py_DECREF(tmp_compexpr_left_19);
        Py_DECREF(tmp_compexpr_right_19);
        if (tmp_condition_result_25 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
        assert(tmp_condition_result_25 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_25:;
    {
        PyObject *tmp_called_name_9;
        PyObject *tmp_call_result_10;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_left_name_11;
        PyObject *tmp_left_name_12;
        PyObject *tmp_right_name_11;
        PyObject *tmp_right_name_12;
        tmp_called_name_9 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_9 != NULL);
        tmp_left_name_12 = mod_consts[181];
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_right_name_11 = var_key;
        tmp_left_name_11 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_12, tmp_right_name_11);
        if (tmp_left_name_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_right_name_12 = mod_consts[182];
        tmp_args_element_name_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_11, tmp_right_name_12);
        Py_DECREF(tmp_left_name_11);
        if (tmp_args_element_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 415;
        tmp_call_result_10 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_9, tmp_args_element_name_7);
        Py_DECREF(tmp_args_element_name_7);
        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_10);
    }
    {
        bool tmp_condition_result_26;
        PyObject *tmp_compexpr_left_20;
        PyObject *tmp_compexpr_right_20;
        if (var_last_time_step_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_compexpr_left_20 = var_last_time_step_found;
        tmp_compexpr_right_20 = Py_False;
        tmp_condition_result_26 = RICH_COMPARE_EQ_CBOOL_OBJECT_OBJECT(tmp_compexpr_left_20, tmp_compexpr_right_20);
        if (tmp_condition_result_26 != false) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(var_target_timestep);
        tmp_assign_source_83 = var_target_timestep;
        {
            PyObject *old = var_last_time_step;
            var_last_time_step = tmp_assign_source_83;
            Py_INCREF(var_last_time_step);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_dict_key_2 = mod_consts[170];
        CHECK_OBJECT(var_last_time_step);
        tmp_dict_value_2 = var_last_time_step;
        tmp_ass_subvalue_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_ass_subvalue_1, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        if (var_commit_user_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[165]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_1 = var_commit_user_info;
        if (var_key == NULL) {
            Py_DECREF(tmp_ass_subvalue_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscript_1 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_dict_key_3 = mod_consts[170];
        if (var_last_time_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 423;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_dict_value_3 = var_last_time_step;
        tmp_ass_subvalue_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_ass_subvalue_2, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        if (var_commit_user_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[165]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscribed_2 = var_commit_user_info;
        if (var_key == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }

        tmp_ass_subscript_2 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
    }
    branch_end_26:;
    branch_no_25:;
    branch_no_24:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 339;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    branch_no_15:;
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        if (var_commit_user_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[165]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_3 = var_commit_user_info;
        if (par_all_user_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_3 = par_all_user_dict;
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_3 = var_member_id;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_27;
        PyObject *tmp_compexpr_left_21;
        PyObject *tmp_compexpr_right_21;
        CHECK_OBJECT(par_reply_ana_flag);
        tmp_compexpr_left_21 = par_reply_ana_flag;
        tmp_compexpr_right_21 = Py_True;
        tmp_condition_result_27 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_21, tmp_compexpr_right_21);
        if (tmp_condition_result_27 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_27 == NUITKA_BOOL_TRUE) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
        assert(tmp_condition_result_27 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_27:;
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_10;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_called_name_10 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_name_10 == NULL)) {
            tmp_called_name_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_called_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_dict_key_4 = mod_consts[28];
        CHECK_OBJECT(par_video_oid);
        tmp_dict_value_4 = par_video_oid;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[84];
        CHECK_OBJECT(var_reply_id);
        tmp_dict_value_4 = var_reply_id;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[85];
        CHECK_OBJECT(par_collect_time_step);
        tmp_dict_value_4 = par_collect_time_step;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        tmp_dict_key_4 = mod_consts[87];
        CHECK_OBJECT(par_cookie_dict);
        tmp_dict_value_4 = par_cookie_dict;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 429;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_10, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_84 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_84;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_85 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_85 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_85;
    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_86 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_86 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_86;
    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_87 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_87 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_87;
    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                    exception_lineno = 429;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[184];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            exception_lineno = 429;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_88;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_88 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_has_replies;
            assert(old != NULL);
            var_has_replies = tmp_assign_source_88;
            Py_INCREF(var_has_replies);
            Py_DECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_89 = tmp_tuple_unpack_1__element_2;
        assert(var_replies_data == NULL);
        Py_INCREF(tmp_assign_source_89);
        var_replies_data = tmp_assign_source_89;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_90 = tmp_tuple_unpack_1__element_3;
        assert(var_page_count == NULL);
        Py_INCREF(tmp_assign_source_90);
        var_page_count = tmp_assign_source_90;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_28;
        int tmp_truth_name_13;
        CHECK_OBJECT(var_has_replies);
        tmp_truth_name_13 = CHECK_IF_TRUE(var_has_replies);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_28 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_28 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_91;
        tmp_assign_source_91 = mod_consts[136];
        {
            PyObject *old = var_has_replies;
            assert(old != NULL);
            var_has_replies = tmp_assign_source_91;
            Py_INCREF(var_has_replies);
            Py_DECREF(old);
        }

    }
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_assign_source_92;
        tmp_assign_source_92 = mod_consts[101];
        {
            PyObject *old = var_has_replies;
            assert(old != NULL);
            var_has_replies = tmp_assign_source_92;
            Py_INCREF(var_has_replies);
            Py_DECREF(old);
        }

    }
    branch_end_28:;
    {
        bool tmp_condition_result_29;
        PyObject *tmp_compexpr_left_22;
        PyObject *tmp_compexpr_right_22;
        PyObject *tmp_called_instance_15;
        CHECK_OBJECT(var_reply_id);
        tmp_compexpr_left_22 = var_reply_id;
        if (par_all_commit_direct == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_15 = par_all_commit_direct;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 437;
        tmp_compexpr_right_22 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[113]);
        if (tmp_compexpr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_22, tmp_compexpr_left_22);
        Py_DECREF(tmp_compexpr_right_22);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_29 != false) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        tmp_dict_key_5 = mod_consts[185];
        if (var_member_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[168]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dict_value_5 = var_member_id;
        tmp_assign_source_93 = _PyDict_NewPresized( 9 );
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[47];
        CHECK_OBJECT(var_post_time_step);
        tmp_dict_value_5 = var_post_time_step;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[40];
        CHECK_OBJECT(var_like_number);
        tmp_dict_value_5 = var_like_number;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[141];
        CHECK_OBJECT(var_message);
        tmp_dict_value_5 = var_message;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[186];
        CHECK_OBJECT(var_has_replies);
        tmp_dict_value_5 = var_has_replies;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[84];
        CHECK_OBJECT(par_root_rid);
        tmp_dict_value_5 = par_root_rid;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[100];
        CHECK_OBJECT(par_is_top);
        tmp_dict_value_5 = par_is_top;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[103];
        CHECK_OBJECT(par_is_hot);
        tmp_dict_value_5 = par_is_hot;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[166];
        CHECK_OBJECT(par_collect_time_step);
        tmp_dict_value_5 = par_collect_time_step;
        tmp_res = PyDict_SetItem(tmp_assign_source_93, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        assert(var_commit_info == NULL);
        var_commit_info = tmp_assign_source_93;
    }
    {
        nuitka_bool tmp_condition_result_30;
        int tmp_truth_name_14;
        CHECK_OBJECT(par_timestep_add_mode);
        tmp_truth_name_14 = CHECK_IF_TRUE(par_timestep_add_mode);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_30 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_instance_16;
        CHECK_OBJECT(var_commit_info);
        tmp_called_instance_16 = var_commit_info;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 451;
        tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[113]);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_94 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_94;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_95;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_95 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_95 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
                exception_lineno = 451;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_95;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_96 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_96;
            Py_INCREF(var_key);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_compexpr_left_23;
        PyObject *tmp_compexpr_right_23;
        PyObject *tmp_tmp_condition_result_31_object_1;
        int tmp_truth_name_15;
        CHECK_OBJECT(var_key);
        tmp_compexpr_left_23 = var_key;
        tmp_compexpr_right_23 = mod_consts[166];
        tmp_tmp_condition_result_31_object_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_23, tmp_compexpr_right_23);
        if (tmp_tmp_condition_result_31_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_tmp_condition_result_31_object_1);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_tmp_condition_result_31_object_1);

            exception_lineno = 452;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_31 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_31_object_1);
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    goto loop_start_2;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_97;
        tmp_assign_source_97 = Py_False;
        {
            PyObject *old = var_last_time_step_found;
            var_last_time_step_found = tmp_assign_source_97;
            Py_INCREF(var_last_time_step_found);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_list_arg_3;
        PyObject *tmp_called_instance_17;
        if (par_all_commit_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_17 = par_all_commit_full_timestep_dict;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 457;
        tmp_list_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[113]);
        if (tmp_list_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_98 = MAKE_LIST(tmp_list_arg_3);
        Py_DECREF(tmp_list_arg_3);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_comment_dire_timestep_list;
            var_last_comment_dire_timestep_list = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_99;
        PyObject *tmp_expression_name_42;
        PyObject *tmp_subscript_name_42;
        PyObject *tmp_left_name_13;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_13;
        CHECK_OBJECT(var_last_comment_dire_timestep_list);
        tmp_expression_name_42 = var_last_comment_dire_timestep_list;
        CHECK_OBJECT(var_last_comment_dire_timestep_list);
        tmp_len_arg_2 = var_last_comment_dire_timestep_list;
        tmp_left_name_13 = BUILTIN_LEN(tmp_len_arg_2);
        assert(!(tmp_left_name_13 == NULL));
        tmp_right_name_13 = mod_consts[75];
        tmp_subscript_name_42 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_name_13, tmp_right_name_13);
        Py_DECREF(tmp_left_name_13);
        assert(!(tmp_subscript_name_42 == NULL));
        tmp_assign_source_99 = LOOKUP_SUBSCRIPT(tmp_expression_name_42, tmp_subscript_name_42);
        Py_DECREF(tmp_subscript_name_42);
        if (tmp_assign_source_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_target_timestep;
            var_target_timestep = tmp_assign_source_99;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_expression_name_43;
        PyObject *tmp_subscript_name_43;
        if (par_all_commit_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_43 = par_all_commit_full_timestep_dict;
        CHECK_OBJECT(var_target_timestep);
        tmp_subscript_name_43 = var_target_timestep;
        tmp_assign_source_100 = LOOKUP_SUBSCRIPT(tmp_expression_name_43, tmp_subscript_name_43);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_time_step_comment_dire;
            var_last_time_step_comment_dire = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_32;
        PyObject *tmp_compexpr_left_24;
        PyObject *tmp_compexpr_right_24;
        PyObject *tmp_unicode_arg_9;
        PyObject *tmp_called_instance_18;
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_9 = var_reply_id;
        tmp_compexpr_left_24 = PyObject_Unicode(tmp_unicode_arg_9);
        if (tmp_compexpr_left_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_last_time_step_comment_dire);
        tmp_called_instance_18 = var_last_time_step_comment_dire;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 461;
        tmp_compexpr_right_24 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[113]);
        if (tmp_compexpr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_24);

            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_24, tmp_compexpr_left_24);
        Py_DECREF(tmp_compexpr_left_24);
        Py_DECREF(tmp_compexpr_right_24);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_32 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_32 != false) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_expression_name_44;
        PyObject *tmp_subscript_name_44;
        PyObject *tmp_unicode_arg_10;
        if (var_last_time_step_comment_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[188]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_44 = var_last_time_step_comment_dire;
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 463;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_10 = var_reply_id;
        tmp_subscript_name_44 = PyObject_Unicode(tmp_unicode_arg_10);
        if (tmp_subscript_name_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_101 = LOOKUP_SUBSCRIPT(tmp_expression_name_44, tmp_subscript_name_44);
        Py_DECREF(tmp_subscript_name_44);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_test_last_time_step_comment_dire;
            var_test_last_time_step_comment_dire = tmp_assign_source_101;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_102;
        PyObject *tmp_expression_name_45;
        PyObject *tmp_subscript_name_45;
        CHECK_OBJECT(var_test_last_time_step_comment_dire);
        tmp_expression_name_45 = var_test_last_time_step_comment_dire;
        CHECK_OBJECT(var_key);
        tmp_subscript_name_45 = var_key;
        tmp_assign_source_102 = LOOKUP_SUBSCRIPT(tmp_expression_name_45, tmp_subscript_name_45);
        if (tmp_assign_source_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_test_last_time_step_comment_dire;
            assert(old != NULL);
            var_test_last_time_step_comment_dire = tmp_assign_source_102;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_compexpr_left_25;
        PyObject *tmp_compexpr_right_25;
        PyObject *tmp_type_arg_2;
        CHECK_OBJECT(var_test_last_time_step_comment_dire);
        tmp_type_arg_2 = var_test_last_time_step_comment_dire;
        tmp_compexpr_left_25 = BUILTIN_TYPE1(tmp_type_arg_2);
        assert(!(tmp_compexpr_left_25 == NULL));
        tmp_compexpr_right_25 = (PyObject *)&PyDict_Type;
        tmp_condition_result_33 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_25, tmp_compexpr_right_25);
        Py_DECREF(tmp_compexpr_left_25);
        assert(!(tmp_condition_result_33 == NUITKA_BOOL_EXCEPTION));
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
        assert(tmp_condition_result_33 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_33:;
    {
        bool tmp_condition_result_34;
        PyObject *tmp_compexpr_left_26;
        PyObject *tmp_compexpr_right_26;
        PyObject *tmp_called_instance_19;
        tmp_compexpr_left_26 = mod_consts[170];
        CHECK_OBJECT(var_test_last_time_step_comment_dire);
        tmp_called_instance_19 = var_test_last_time_step_comment_dire;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 466;
        tmp_compexpr_right_26 = CALL_METHOD_NO_ARGS(tmp_called_instance_19, mod_consts[113]);
        if (tmp_compexpr_right_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_26, tmp_compexpr_left_26);
        Py_DECREF(tmp_compexpr_right_26);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_34 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_34 != false) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_assign_source_103;
        PyObject *tmp_expression_name_46;
        PyObject *tmp_subscript_name_46;
        if (var_test_last_time_step_comment_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[189]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_46 = var_test_last_time_step_comment_dire;
        tmp_subscript_name_46 = mod_consts[170];
        tmp_assign_source_103 = LOOKUP_SUBSCRIPT(tmp_expression_name_46, tmp_subscript_name_46);
        if (tmp_assign_source_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_time_step;
            var_last_time_step = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = Py_True;
        {
            PyObject *old = var_last_time_step_found;
            assert(old != NULL);
            var_last_time_step_found = tmp_assign_source_104;
            Py_INCREF(var_last_time_step_found);
            Py_DECREF(old);
        }

    }
    goto branch_end_34;
    branch_no_34:;
    {
        PyObject *tmp_called_name_11;
        PyObject *tmp_call_result_11;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_left_name_14;
        PyObject *tmp_left_name_15;
        PyObject *tmp_right_name_14;
        PyObject *tmp_right_name_15;
        tmp_called_name_11 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_11 != NULL);
        tmp_left_name_15 = mod_consts[190];
        CHECK_OBJECT(var_key);
        tmp_right_name_14 = var_key;
        tmp_left_name_14 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_15, tmp_right_name_14);
        if (tmp_left_name_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_15 = mod_consts[191];
        tmp_args_element_name_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_14, tmp_right_name_15);
        Py_DECREF(tmp_left_name_14);
        if (tmp_args_element_name_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 470;
        tmp_call_result_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_11, tmp_args_element_name_8);
        Py_DECREF(tmp_args_element_name_8);
        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_end_34:;
    goto branch_end_33;
    branch_no_33:;
    {
        PyObject *tmp_called_name_12;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_name_9;
        PyObject *tmp_left_name_16;
        PyObject *tmp_left_name_17;
        PyObject *tmp_right_name_16;
        PyObject *tmp_right_name_17;
        tmp_called_name_12 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_12 != NULL);
        tmp_left_name_17 = mod_consts[190];
        CHECK_OBJECT(var_key);
        tmp_right_name_16 = var_key;
        tmp_left_name_16 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_17, tmp_right_name_16);
        if (tmp_left_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_17 = mod_consts[192];
        tmp_args_element_name_9 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_16, tmp_right_name_17);
        Py_DECREF(tmp_left_name_16);
        if (tmp_args_element_name_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 473;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_12, tmp_args_element_name_9);
        Py_DECREF(tmp_args_element_name_9);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_12);
    }
    branch_end_33:;
    goto branch_end_32;
    branch_no_32:;
    {
        PyObject *tmp_called_name_13;
        PyObject *tmp_call_result_13;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_left_name_18;
        PyObject *tmp_left_name_19;
        PyObject *tmp_right_name_18;
        PyObject *tmp_right_name_19;
        tmp_called_name_13 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_13 != NULL);
        tmp_left_name_19 = mod_consts[190];
        CHECK_OBJECT(var_key);
        tmp_right_name_18 = var_key;
        tmp_left_name_18 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_19, tmp_right_name_18);
        if (tmp_left_name_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_19 = mod_consts[192];
        tmp_args_element_name_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_18, tmp_right_name_19);
        Py_DECREF(tmp_left_name_18);
        if (tmp_args_element_name_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 476;
        tmp_call_result_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_13, tmp_args_element_name_10);
        Py_DECREF(tmp_args_element_name_10);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_end_32:;
    {
        nuitka_bool tmp_condition_result_35;
        int tmp_truth_name_16;
        if (var_last_time_step_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_truth_name_16 = CHECK_IF_TRUE(var_last_time_step_found);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_35 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    {
        nuitka_bool tmp_condition_result_36;
        int tmp_truth_name_17;
        if (par_timestep_file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_truth_name_17 = CHECK_IF_TRUE(par_timestep_file);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_36 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_unicode_arg_11;
        if (var_last_time_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_11 = var_last_time_step;
        tmp_assign_source_105 = PyObject_Unicode(tmp_unicode_arg_11);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_all_dire_file_name;
            var_last_all_dire_file_name = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_106;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_open_mode_2;
        PyObject *tmp_open_encoding_2;
        CHECK_OBJECT(var_last_all_dire_file_name);
        tmp_open_filename_2 = var_last_all_dire_file_name;
        tmp_open_mode_2 = mod_consts[177];
        tmp_open_encoding_2 = mod_consts[64];
        tmp_assign_source_106 = BUILTIN_OPEN(tmp_open_filename_2, tmp_open_mode_2, NULL, tmp_open_encoding_2, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_all_dire_file;
            var_last_all_dire_file = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_107;
        PyObject *tmp_called_instance_20;
        PyObject *tmp_args_element_name_11;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_instance_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_last_all_dire_file);
        tmp_args_element_name_11 = var_last_all_dire_file;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 487;
        tmp_assign_source_107 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_20, mod_consts[67], tmp_args_element_name_11);
        if (tmp_assign_source_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_commit_dire;
            var_last_commit_dire = tmp_assign_source_107;
            Py_XDECREF(old);
        }

    }
    branch_no_36:;
    {
        nuitka_bool tmp_condition_result_37;
        int tmp_truth_name_18;
        if (par_timestep_key_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_truth_name_18 = CHECK_IF_TRUE(par_timestep_key_dire);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_37 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_expression_name_47;
        PyObject *tmp_subscript_name_47;
        PyObject *tmp_unicode_arg_12;
        if (par_all_commit_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 489;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_47 = par_all_commit_full_timestep_dict;
        if (var_last_time_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_12 = var_last_time_step;
        tmp_subscript_name_47 = PyObject_Unicode(tmp_unicode_arg_12);
        if (tmp_subscript_name_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_108 = LOOKUP_SUBSCRIPT(tmp_expression_name_47, tmp_subscript_name_47);
        Py_DECREF(tmp_subscript_name_47);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 489;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_commit_dire;
            var_last_commit_dire = tmp_assign_source_108;
            Py_XDECREF(old);
        }

    }
    branch_no_37:;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_expression_name_48;
        PyObject *tmp_subscript_name_48;
        PyObject *tmp_unicode_arg_13;
        if (var_last_commit_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_48 = var_last_commit_dire;
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_13 = var_reply_id;
        tmp_subscript_name_48 = PyObject_Unicode(tmp_unicode_arg_13);
        if (tmp_subscript_name_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_109 = LOOKUP_SUBSCRIPT(tmp_expression_name_48, tmp_subscript_name_48);
        Py_DECREF(tmp_subscript_name_48);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 491;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_commit_dire;
            var_last_commit_dire = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = Py_True;
        {
            PyObject *old = var_found_old_data;
            var_found_old_data = tmp_assign_source_110;
            Py_INCREF(var_found_old_data);
            Py_XDECREF(old);
        }

    }
    goto branch_end_35;
    branch_no_35:;
    {
        bool tmp_condition_result_38;
        PyObject *tmp_compexpr_left_27;
        PyObject *tmp_compexpr_right_27;
        PyObject *tmp_unicode_arg_14;
        PyObject *tmp_called_instance_21;
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_14 = var_reply_id;
        tmp_compexpr_left_27 = PyObject_Unicode(tmp_unicode_arg_14);
        if (tmp_compexpr_left_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_last_time_step_comment_dire == NULL) {
            Py_DECREF(tmp_compexpr_left_27);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[188]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_instance_21 = var_last_time_step_comment_dire;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 494;
        tmp_compexpr_right_27 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[113]);
        if (tmp_compexpr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_27);

            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_27, tmp_compexpr_left_27);
        Py_DECREF(tmp_compexpr_left_27);
        Py_DECREF(tmp_compexpr_right_27);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 494;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_38 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_38 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_expression_name_49;
        PyObject *tmp_subscript_name_49;
        PyObject *tmp_unicode_arg_15;
        if (var_last_time_step_comment_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[188]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 495;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_49 = var_last_time_step_comment_dire;
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_15 = var_reply_id;
        tmp_subscript_name_49 = PyObject_Unicode(tmp_unicode_arg_15);
        if (tmp_subscript_name_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_111 = LOOKUP_SUBSCRIPT(tmp_expression_name_49, tmp_subscript_name_49);
        Py_DECREF(tmp_subscript_name_49);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 495;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_last_commit_dire;
            var_last_commit_dire = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_112;
        tmp_assign_source_112 = Py_True;
        {
            PyObject *old = var_found_old_data;
            var_found_old_data = tmp_assign_source_112;
            Py_INCREF(var_found_old_data);
            Py_XDECREF(old);
        }

    }
    goto branch_end_38;
    branch_no_38:;
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = Py_False;
        {
            PyObject *old = var_found_old_data;
            var_found_old_data = tmp_assign_source_113;
            Py_INCREF(var_found_old_data);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_14;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_left_name_20;
        PyObject *tmp_left_name_21;
        PyObject *tmp_right_name_20;
        PyObject *tmp_right_name_21;
        tmp_called_name_14 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_14 != NULL);
        tmp_left_name_21 = mod_consts[172];
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_right_name_20 = var_key;
        tmp_left_name_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_21, tmp_right_name_20);
        if (tmp_left_name_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_21 = mod_consts[194];
        tmp_args_element_name_12 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_20, tmp_right_name_21);
        Py_DECREF(tmp_left_name_20);
        if (tmp_args_element_name_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 500;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_14, tmp_args_element_name_12);
        Py_DECREF(tmp_args_element_name_12);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_14);
    }
    branch_end_38:;
    branch_end_35:;
    {
        nuitka_bool tmp_condition_result_39;
        int tmp_truth_name_19;
        if (var_found_old_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[180]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 502;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_truth_name_19 = CHECK_IF_TRUE(var_found_old_data);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 502;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_39 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_compexpr_left_28;
        PyObject *tmp_compexpr_right_28;
        PyObject *tmp_expression_name_50;
        PyObject *tmp_subscript_name_50;
        PyObject *tmp_expression_name_51;
        PyObject *tmp_subscript_name_51;
        if (var_last_commit_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[193]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_50 = var_last_commit_dire;
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_subscript_name_50 = var_key;
        tmp_compexpr_left_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_50, tmp_subscript_name_50);
        if (tmp_compexpr_left_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_commit_info == NULL) {
            Py_DECREF(tmp_compexpr_left_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_name_51 = var_commit_info;
        if (var_key == NULL) {
            Py_DECREF(tmp_compexpr_left_28);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_subscript_name_51 = var_key;
        tmp_compexpr_right_28 = LOOKUP_SUBSCRIPT(tmp_expression_name_51, tmp_subscript_name_51);
        if (tmp_compexpr_right_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_compexpr_left_28);

            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_condition_result_40 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_28, tmp_compexpr_right_28);
        Py_DECREF(tmp_compexpr_left_28);
        Py_DECREF(tmp_compexpr_right_28);
        if (tmp_condition_result_40 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 503;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
        assert(tmp_condition_result_40 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_40:;
    {
        PyObject *tmp_called_name_15;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_left_name_22;
        PyObject *tmp_left_name_23;
        PyObject *tmp_right_name_22;
        PyObject *tmp_right_name_23;
        tmp_called_name_15 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_15 != NULL);
        tmp_left_name_23 = mod_consts[181];
        if (var_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_right_name_22 = var_key;
        tmp_left_name_22 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_23, tmp_right_name_22);
        if (tmp_left_name_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_23 = mod_consts[182];
        tmp_args_element_name_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_22, tmp_right_name_23);
        Py_DECREF(tmp_left_name_22);
        if (tmp_args_element_name_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 504;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_15, tmp_args_element_name_13);
        Py_DECREF(tmp_args_element_name_13);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_15);
    }
    {
        bool tmp_condition_result_41;
        PyObject *tmp_compexpr_left_29;
        PyObject *tmp_compexpr_right_29;
        if (var_last_time_step_found == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[174]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 506;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_compexpr_left_29 = var_last_time_step_found;
        tmp_compexpr_right_29 = Py_False;
        tmp_condition_result_41 = RICH_COMPARE_EQ_CBOOL_OBJECT_OBJECT(tmp_compexpr_left_29, tmp_compexpr_right_29);
        if (tmp_condition_result_41 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    {
        PyObject *tmp_assign_source_114;
        CHECK_OBJECT(var_target_timestep);
        tmp_assign_source_114 = var_target_timestep;
        {
            PyObject *old = var_last_time_step;
            var_last_time_step = tmp_assign_source_114;
            Py_INCREF(var_last_time_step);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_dict_key_6 = mod_consts[170];
        CHECK_OBJECT(var_last_time_step);
        tmp_dict_value_6 = var_last_time_step;
        tmp_ass_subvalue_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_ass_subvalue_4, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        if (var_commit_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_4 = var_commit_info;
        if (var_key == NULL) {
            Py_DECREF(tmp_ass_subvalue_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 508;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscript_4 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    goto branch_end_41;
    branch_no_41:;
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_dict_key_7 = mod_consts[170];
        if (var_last_time_step == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 512;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_dict_value_7 = var_last_time_step;
        tmp_ass_subvalue_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_ass_subvalue_5, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        if (var_commit_info == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscribed_5 = var_commit_info;
        if (var_key == NULL) {
            Py_DECREF(tmp_ass_subvalue_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[178]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 511;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_ass_subscript_5 = var_key;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
    }
    branch_end_41:;
    branch_no_40:;
    branch_no_39:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 451;
        type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_30:;
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        if (var_commit_info == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subvalue_6 = var_commit_info;
        if (par_all_commit_direct == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_6 = par_all_commit_direct;
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscript_6 = var_reply_id;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_29:;
    {
        nuitka_bool tmp_condition_result_42;
        PyObject *tmp_operand_name_3;
        PyObject *tmp_compexpr_left_30;
        PyObject *tmp_compexpr_right_30;
        CHECK_OBJECT(par_reply_ana_flag);
        tmp_compexpr_left_30 = par_reply_ana_flag;
        tmp_compexpr_right_30 = Py_False;
        tmp_operand_name_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_compexpr_left_30, tmp_compexpr_right_30);
        if (tmp_operand_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_name_3);
        Py_DECREF(tmp_operand_name_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_42 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_42 == NUITKA_BOOL_TRUE) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    {
        PyObject *tmp_called_name_16;
        PyObject *tmp_call_result_16;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        tmp_called_name_16 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[195]);

        if (unlikely(tmp_called_name_16 == NULL)) {
            tmp_called_name_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[195]);
        }

        if (tmp_called_name_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = mod_consts[92];
        CHECK_OBJECT(par_continue_mode_enable);
        tmp_dict_value_8 = par_continue_mode_enable;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 14 );
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[28];
        CHECK_OBJECT(par_video_oid);
        tmp_dict_value_8 = par_video_oid;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[84];
        if (var_reply_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[187]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 520;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = var_reply_id;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[85];
        CHECK_OBJECT(par_collect_time_step);
        tmp_dict_value_8 = par_collect_time_step;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[98];
        if (par_all_commit_direct == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = par_all_commit_direct;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[97];
        if (par_all_user_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = par_all_user_dict;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[196];
        if (var_replies_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = var_replies_data;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[79];
        if (var_page_count == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = var_page_count;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[104];
        if (par_timestep_file == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = par_timestep_file;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[105];
        CHECK_OBJECT(par_timestep_add_mode);
        tmp_dict_value_8 = par_timestep_add_mode;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[106];
        if (par_timestep_key_dire == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = par_timestep_key_dire;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[107];
        if (par_all_user_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = par_all_user_full_timestep_dict;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[108];
        if (par_all_commit_full_timestep_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto dict_build_exception_2;
        }

        tmp_dict_value_8 = par_all_commit_full_timestep_dict;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[87];
        CHECK_OBJECT(par_cookie_dict);
        tmp_dict_value_8 = par_cookie_dict;
        tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kwargs_name_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_bf1283372902174afa8fadb130e17256->m_frame.f_lineno = 520;
        tmp_call_result_16 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_16, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_16);
    }
    branch_no_42:;
    branch_no_3:;
    {
        PyObject *tmp_tuple_element_1;
        if (par_all_commit_direct == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_all_commit_direct;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (par_all_user_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_all_user_dict;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf1283372902174afa8fadb130e17256);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf1283372902174afa8fadb130e17256);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_bf1283372902174afa8fadb130e17256);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf1283372902174afa8fadb130e17256, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf1283372902174afa8fadb130e17256->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf1283372902174afa8fadb130e17256, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf1283372902174afa8fadb130e17256,
        type_description_1,
        par_continue_mode_enable,
        par_video_oid,
        par_commit_all,
        par_commit_index,
        par_reply_ana_flag,
        par_root_rid,
        par_all_user_dict,
        par_all_commit_direct,
        par_collect_time_step,
        par_is_top,
        par_is_list,
        par_is_hot,
        par_timestep_file,
        par_timestep_add_mode,
        par_timestep_key_dire,
        par_all_user_full_timestep_dict,
        par_all_commit_full_timestep_dict,
        par_cookie_dict,
        par_commit_db_client,
        par_user_db_client,
        par_db_mode,
        par_db_error_to_local,
        var_has_replies,
        var_current_commit,
        var_reply_id,
        var_member_id,
        var_like_number,
        var_fans_detail,
        var_fans_level,
        var_post_time_step,
        var_member_data,
        var_user_name,
        var_sex,
        var_sign,
        var_avatar_adress,
        var_offical_data,
        var_offical_type,
        var_offical_desctrion,
        var_level_data,
        var_user_level,
        var_nameplate_data,
        var_nameplate_kind,
        var_nameplate_name,
        var_nameplate_image,
        var_nameplate_image_small,
        var_nameplate_level,
        var_nameplate_condition,
        var_has_nameplate,
        var_vip_data,
        var_vip_type,
        var_vip_due_timestep,
        var_has_vip,
        var_message_data,
        var_message,
        var_commit_user_info,
        var_key,
        var_last_time_step_found,
        var_last_user_dire_timestep_list,
        var_target_timestep_index,
        var_target_timestep,
        var_last_time_step_user_dire,
        var_test_last_time_step_user_dire,
        var_last_time_step,
        var_last_all_user_dire_file_name,
        var_last_all_user_dire_file,
        var_found_old_data,
        var_replies_data,
        var_page_count,
        var_commit_info,
        var_last_comment_dire_timestep_list,
        var_last_time_step_comment_dire,
        var_test_last_time_step_comment_dire,
        var_last_all_dire_file_name,
        var_last_all_dire_file,
        var_last_commit_dire
    );


    // Release cached frame if used for exception.
    if (frame_bf1283372902174afa8fadb130e17256 == cache_frame_bf1283372902174afa8fadb130e17256) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_bf1283372902174afa8fadb130e17256);
        cache_frame_bf1283372902174afa8fadb130e17256 = NULL;
    }

    assertFrameObject(frame_bf1283372902174afa8fadb130e17256);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_continue_mode_enable);
    Py_DECREF(par_continue_mode_enable);
    par_continue_mode_enable = NULL;
    CHECK_OBJECT(par_video_oid);
    Py_DECREF(par_video_oid);
    par_video_oid = NULL;
    CHECK_OBJECT(par_commit_all);
    Py_DECREF(par_commit_all);
    par_commit_all = NULL;
    CHECK_OBJECT(par_commit_index);
    Py_DECREF(par_commit_index);
    par_commit_index = NULL;
    CHECK_OBJECT(par_reply_ana_flag);
    Py_DECREF(par_reply_ana_flag);
    par_reply_ana_flag = NULL;
    Py_XDECREF(par_root_rid);
    par_root_rid = NULL;
    Py_XDECREF(par_all_user_dict);
    par_all_user_dict = NULL;
    Py_XDECREF(par_all_commit_direct);
    par_all_commit_direct = NULL;
    CHECK_OBJECT(par_collect_time_step);
    Py_DECREF(par_collect_time_step);
    par_collect_time_step = NULL;
    CHECK_OBJECT(par_is_top);
    Py_DECREF(par_is_top);
    par_is_top = NULL;
    CHECK_OBJECT(par_is_list);
    Py_DECREF(par_is_list);
    par_is_list = NULL;
    CHECK_OBJECT(par_is_hot);
    Py_DECREF(par_is_hot);
    par_is_hot = NULL;
    Py_XDECREF(par_timestep_file);
    par_timestep_file = NULL;
    CHECK_OBJECT(par_timestep_add_mode);
    Py_DECREF(par_timestep_add_mode);
    par_timestep_add_mode = NULL;
    Py_XDECREF(par_timestep_key_dire);
    par_timestep_key_dire = NULL;
    Py_XDECREF(par_all_user_full_timestep_dict);
    par_all_user_full_timestep_dict = NULL;
    Py_XDECREF(par_all_commit_full_timestep_dict);
    par_all_commit_full_timestep_dict = NULL;
    CHECK_OBJECT(par_cookie_dict);
    Py_DECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    CHECK_OBJECT(par_commit_db_client);
    Py_DECREF(par_commit_db_client);
    par_commit_db_client = NULL;
    Py_XDECREF(par_user_db_client);
    par_user_db_client = NULL;
    Py_XDECREF(par_db_mode);
    par_db_mode = NULL;
    CHECK_OBJECT(par_db_error_to_local);
    Py_DECREF(par_db_error_to_local);
    par_db_error_to_local = NULL;
    Py_XDECREF(var_has_replies);
    var_has_replies = NULL;
    Py_XDECREF(var_current_commit);
    var_current_commit = NULL;
    Py_XDECREF(var_reply_id);
    var_reply_id = NULL;
    Py_XDECREF(var_member_id);
    var_member_id = NULL;
    Py_XDECREF(var_like_number);
    var_like_number = NULL;
    Py_XDECREF(var_fans_detail);
    var_fans_detail = NULL;
    Py_XDECREF(var_fans_level);
    var_fans_level = NULL;
    Py_XDECREF(var_post_time_step);
    var_post_time_step = NULL;
    Py_XDECREF(var_member_data);
    var_member_data = NULL;
    Py_XDECREF(var_user_name);
    var_user_name = NULL;
    Py_XDECREF(var_sex);
    var_sex = NULL;
    Py_XDECREF(var_sign);
    var_sign = NULL;
    Py_XDECREF(var_avatar_adress);
    var_avatar_adress = NULL;
    Py_XDECREF(var_offical_data);
    var_offical_data = NULL;
    Py_XDECREF(var_offical_type);
    var_offical_type = NULL;
    Py_XDECREF(var_offical_desctrion);
    var_offical_desctrion = NULL;
    Py_XDECREF(var_level_data);
    var_level_data = NULL;
    Py_XDECREF(var_user_level);
    var_user_level = NULL;
    Py_XDECREF(var_nameplate_data);
    var_nameplate_data = NULL;
    Py_XDECREF(var_nameplate_kind);
    var_nameplate_kind = NULL;
    Py_XDECREF(var_nameplate_name);
    var_nameplate_name = NULL;
    Py_XDECREF(var_nameplate_image);
    var_nameplate_image = NULL;
    Py_XDECREF(var_nameplate_image_small);
    var_nameplate_image_small = NULL;
    Py_XDECREF(var_nameplate_level);
    var_nameplate_level = NULL;
    Py_XDECREF(var_nameplate_condition);
    var_nameplate_condition = NULL;
    Py_XDECREF(var_has_nameplate);
    var_has_nameplate = NULL;
    Py_XDECREF(var_vip_data);
    var_vip_data = NULL;
    Py_XDECREF(var_vip_type);
    var_vip_type = NULL;
    Py_XDECREF(var_vip_due_timestep);
    var_vip_due_timestep = NULL;
    Py_XDECREF(var_has_vip);
    var_has_vip = NULL;
    Py_XDECREF(var_message_data);
    var_message_data = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_commit_user_info);
    var_commit_user_info = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_last_time_step_found);
    var_last_time_step_found = NULL;
    Py_XDECREF(var_last_user_dire_timestep_list);
    var_last_user_dire_timestep_list = NULL;
    Py_XDECREF(var_target_timestep_index);
    var_target_timestep_index = NULL;
    Py_XDECREF(var_target_timestep);
    var_target_timestep = NULL;
    Py_XDECREF(var_last_time_step_user_dire);
    var_last_time_step_user_dire = NULL;
    Py_XDECREF(var_test_last_time_step_user_dire);
    var_test_last_time_step_user_dire = NULL;
    Py_XDECREF(var_last_time_step);
    var_last_time_step = NULL;
    Py_XDECREF(var_last_all_user_dire_file_name);
    var_last_all_user_dire_file_name = NULL;
    Py_XDECREF(var_last_all_user_dire_file);
    var_last_all_user_dire_file = NULL;
    Py_XDECREF(var_found_old_data);
    var_found_old_data = NULL;
    Py_XDECREF(var_replies_data);
    var_replies_data = NULL;
    Py_XDECREF(var_page_count);
    var_page_count = NULL;
    Py_XDECREF(var_commit_info);
    var_commit_info = NULL;
    Py_XDECREF(var_last_comment_dire_timestep_list);
    var_last_comment_dire_timestep_list = NULL;
    Py_XDECREF(var_last_time_step_comment_dire);
    var_last_time_step_comment_dire = NULL;
    Py_XDECREF(var_test_last_time_step_comment_dire);
    var_test_last_time_step_comment_dire = NULL;
    Py_XDECREF(var_last_all_dire_file_name);
    var_last_all_dire_file_name = NULL;
    Py_XDECREF(var_last_all_dire_file);
    var_last_all_dire_file = NULL;
    Py_XDECREF(var_last_commit_dire);
    var_last_commit_dire = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(par_continue_mode_enable);
    Py_DECREF(par_continue_mode_enable);
    par_continue_mode_enable = NULL;
    CHECK_OBJECT(par_video_oid);
    Py_DECREF(par_video_oid);
    par_video_oid = NULL;
    CHECK_OBJECT(par_commit_all);
    Py_DECREF(par_commit_all);
    par_commit_all = NULL;
    CHECK_OBJECT(par_commit_index);
    Py_DECREF(par_commit_index);
    par_commit_index = NULL;
    CHECK_OBJECT(par_reply_ana_flag);
    Py_DECREF(par_reply_ana_flag);
    par_reply_ana_flag = NULL;
    Py_XDECREF(par_root_rid);
    par_root_rid = NULL;
    Py_XDECREF(par_all_user_dict);
    par_all_user_dict = NULL;
    Py_XDECREF(par_all_commit_direct);
    par_all_commit_direct = NULL;
    CHECK_OBJECT(par_collect_time_step);
    Py_DECREF(par_collect_time_step);
    par_collect_time_step = NULL;
    CHECK_OBJECT(par_is_top);
    Py_DECREF(par_is_top);
    par_is_top = NULL;
    CHECK_OBJECT(par_is_list);
    Py_DECREF(par_is_list);
    par_is_list = NULL;
    CHECK_OBJECT(par_is_hot);
    Py_DECREF(par_is_hot);
    par_is_hot = NULL;
    Py_XDECREF(par_timestep_file);
    par_timestep_file = NULL;
    CHECK_OBJECT(par_timestep_add_mode);
    Py_DECREF(par_timestep_add_mode);
    par_timestep_add_mode = NULL;
    Py_XDECREF(par_timestep_key_dire);
    par_timestep_key_dire = NULL;
    Py_XDECREF(par_all_user_full_timestep_dict);
    par_all_user_full_timestep_dict = NULL;
    Py_XDECREF(par_all_commit_full_timestep_dict);
    par_all_commit_full_timestep_dict = NULL;
    CHECK_OBJECT(par_cookie_dict);
    Py_DECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    CHECK_OBJECT(par_commit_db_client);
    Py_DECREF(par_commit_db_client);
    par_commit_db_client = NULL;
    Py_XDECREF(par_user_db_client);
    par_user_db_client = NULL;
    Py_XDECREF(par_db_mode);
    par_db_mode = NULL;
    CHECK_OBJECT(par_db_error_to_local);
    Py_DECREF(par_db_error_to_local);
    par_db_error_to_local = NULL;
    Py_XDECREF(var_has_replies);
    var_has_replies = NULL;
    Py_XDECREF(var_current_commit);
    var_current_commit = NULL;
    Py_XDECREF(var_reply_id);
    var_reply_id = NULL;
    Py_XDECREF(var_member_id);
    var_member_id = NULL;
    Py_XDECREF(var_like_number);
    var_like_number = NULL;
    Py_XDECREF(var_fans_detail);
    var_fans_detail = NULL;
    Py_XDECREF(var_fans_level);
    var_fans_level = NULL;
    Py_XDECREF(var_post_time_step);
    var_post_time_step = NULL;
    Py_XDECREF(var_member_data);
    var_member_data = NULL;
    Py_XDECREF(var_user_name);
    var_user_name = NULL;
    Py_XDECREF(var_sex);
    var_sex = NULL;
    Py_XDECREF(var_sign);
    var_sign = NULL;
    Py_XDECREF(var_avatar_adress);
    var_avatar_adress = NULL;
    Py_XDECREF(var_offical_data);
    var_offical_data = NULL;
    Py_XDECREF(var_offical_type);
    var_offical_type = NULL;
    Py_XDECREF(var_offical_desctrion);
    var_offical_desctrion = NULL;
    Py_XDECREF(var_level_data);
    var_level_data = NULL;
    Py_XDECREF(var_user_level);
    var_user_level = NULL;
    Py_XDECREF(var_nameplate_data);
    var_nameplate_data = NULL;
    Py_XDECREF(var_nameplate_kind);
    var_nameplate_kind = NULL;
    Py_XDECREF(var_nameplate_name);
    var_nameplate_name = NULL;
    Py_XDECREF(var_nameplate_image);
    var_nameplate_image = NULL;
    Py_XDECREF(var_nameplate_image_small);
    var_nameplate_image_small = NULL;
    Py_XDECREF(var_nameplate_level);
    var_nameplate_level = NULL;
    Py_XDECREF(var_nameplate_condition);
    var_nameplate_condition = NULL;
    Py_XDECREF(var_has_nameplate);
    var_has_nameplate = NULL;
    Py_XDECREF(var_vip_data);
    var_vip_data = NULL;
    Py_XDECREF(var_vip_type);
    var_vip_type = NULL;
    Py_XDECREF(var_vip_due_timestep);
    var_vip_due_timestep = NULL;
    Py_XDECREF(var_has_vip);
    var_has_vip = NULL;
    Py_XDECREF(var_message_data);
    var_message_data = NULL;
    Py_XDECREF(var_message);
    var_message = NULL;
    Py_XDECREF(var_commit_user_info);
    var_commit_user_info = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_last_time_step_found);
    var_last_time_step_found = NULL;
    Py_XDECREF(var_last_user_dire_timestep_list);
    var_last_user_dire_timestep_list = NULL;
    Py_XDECREF(var_target_timestep_index);
    var_target_timestep_index = NULL;
    Py_XDECREF(var_target_timestep);
    var_target_timestep = NULL;
    Py_XDECREF(var_last_time_step_user_dire);
    var_last_time_step_user_dire = NULL;
    Py_XDECREF(var_test_last_time_step_user_dire);
    var_test_last_time_step_user_dire = NULL;
    Py_XDECREF(var_last_time_step);
    var_last_time_step = NULL;
    Py_XDECREF(var_last_all_user_dire_file_name);
    var_last_all_user_dire_file_name = NULL;
    Py_XDECREF(var_last_all_user_dire_file);
    var_last_all_user_dire_file = NULL;
    Py_XDECREF(var_found_old_data);
    var_found_old_data = NULL;
    Py_XDECREF(var_replies_data);
    var_replies_data = NULL;
    Py_XDECREF(var_page_count);
    var_page_count = NULL;
    Py_XDECREF(var_commit_info);
    var_commit_info = NULL;
    Py_XDECREF(var_last_comment_dire_timestep_list);
    var_last_comment_dire_timestep_list = NULL;
    Py_XDECREF(var_last_time_step_comment_dire);
    var_last_time_step_comment_dire = NULL;
    Py_XDECREF(var_test_last_time_step_comment_dire);
    var_test_last_time_step_comment_dire = NULL;
    Py_XDECREF(var_last_all_dire_file_name);
    var_last_all_dire_file_name = NULL;
    Py_XDECREF(var_last_all_dire_file);
    var_last_all_dire_file = NULL;
    Py_XDECREF(var_last_commit_dire);
    var_last_commit_dire = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

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


static PyObject *impl_api_commit_get$$$function__8_commit_json_ana(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_continue_mode_enable = python_pars[0];
    PyObject *par_f = python_pars[1];
    PyObject *par_page_init = python_pars[2];
    PyObject *par_is_file = python_pars[3];
    PyObject *par_json_data = python_pars[4];
    PyObject *par_all_commit_direct = python_pars[5];
    PyObject *par_all_user_dict = python_pars[6];
    PyObject *par_video_oid = python_pars[7];
    PyObject *par_timestep_file = python_pars[8];
    PyObject *par_timestep_add_mode = python_pars[9];
    PyObject *par_timestep_key_dire = python_pars[10];
    PyObject *par_all_user_full_timestep_dict = python_pars[11];
    PyObject *par_all_commit_full_timestep_dict = python_pars[12];
    PyObject *par_cookie_dict = python_pars[13];
    PyObject *var_commit_data = NULL;
    PyObject *var_commit_all = NULL;
    PyObject *var_commit_index = NULL;
    PyObject *var_upper_data = NULL;
    PyObject *var_is_top = NULL;
    PyObject *var_total_number = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    struct Nuitka_FrameObject *frame_3255088c1f31dd297e8d983c3d9df6e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3255088c1f31dd297e8d983c3d9df6e4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3255088c1f31dd297e8d983c3d9df6e4)) {
        Py_XDECREF(cache_frame_3255088c1f31dd297e8d983c3d9df6e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3255088c1f31dd297e8d983c3d9df6e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3255088c1f31dd297e8d983c3d9df6e4 = MAKE_FUNCTION_FRAME(codeobj_3255088c1f31dd297e8d983c3d9df6e4, module_api_commit_get, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }
    assert(cache_frame_3255088c1f31dd297e8d983c3d9df6e4->m_type_description == NULL);
    frame_3255088c1f31dd297e8d983c3d9df6e4 = cache_frame_3255088c1f31dd297e8d983c3d9df6e4;

    // Push the new frame as the currently active one.
    pushFrameStack(frame_3255088c1f31dd297e8d983c3d9df6e4);

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert(Py_REFCNT(frame_3255088c1f31dd297e8d983c3d9df6e4) == 2); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_is_file);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_file);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
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
        PyObject *tmp_args_element_name_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_f);
        tmp_args_element_name_1 = par_f;
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 529;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[197], tmp_args_element_name_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_json_data;
            assert(old != NULL);
            par_json_data = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_name_1;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT(par_json_data);
        tmp_expression_name_1 = par_json_data;
        tmp_subscript_name_1 = mod_consts[70];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_name_1, tmp_subscript_name_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_commit_data == NULL);
        var_commit_data = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_name_2;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT(var_commit_data);
        tmp_expression_name_2 = var_commit_data;
        tmp_subscript_name_2 = mod_consts[88];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_name_2, tmp_subscript_name_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_commit_all == NULL);
        var_commit_all = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[45];
        assert(var_commit_index == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_commit_index = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_xrange_high_1;
        PyObject *tmp_len_arg_1;
        tmp_xrange_low_1 = mod_consts[45];
        CHECK_OBJECT(var_commit_all);
        tmp_len_arg_1 = var_commit_all;
        tmp_xrange_high_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_xrange_high_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = BUILTIN_XRANGE2(tmp_xrange_low_1, tmp_xrange_high_1);
        Py_DECREF(tmp_xrange_high_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 534;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_7 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_commit_index;
            var_commit_index = tmp_assign_source_7;
            Py_INCREF(var_commit_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_left_name_2;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_right_name_2;
        PyObject *tmp_right_name_3;
        PyObject *tmp_unicode_arg_2;
        PyObject *tmp_left_name_4;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_right_name_4;
        tmp_called_name_1 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_1 != NULL);
        tmp_left_name_3 = mod_consts[198];
        CHECK_OBJECT(var_commit_index);
        tmp_unicode_arg_1 = var_commit_index;
        tmp_right_name_1 = PyObject_Unicode(tmp_unicode_arg_1);
        if (tmp_right_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_left_name_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_3, tmp_right_name_1);
        Py_DECREF(tmp_right_name_1);
        if (tmp_left_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_2 = mod_consts[81];
        tmp_left_name_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_2, tmp_right_name_2);
        Py_DECREF(tmp_left_name_2);
        if (tmp_left_name_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        if (var_commit_all == NULL) {
            Py_DECREF(tmp_left_name_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_len_arg_2 = var_commit_all;
        tmp_left_name_4 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_left_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_right_name_4 = mod_consts[75];
        tmp_unicode_arg_2 = BINARY_OPERATION_SUB_OBJECT_LONG_LONG(tmp_left_name_4, tmp_right_name_4);
        Py_DECREF(tmp_left_name_4);
        assert(!(tmp_unicode_arg_2 == NULL));
        tmp_right_name_3 = PyObject_Unicode(tmp_unicode_arg_2);
        Py_DECREF(tmp_unicode_arg_2);
        if (tmp_right_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_1);

            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_name_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_1, tmp_right_name_3);
        Py_DECREF(tmp_left_name_1);
        Py_DECREF(tmp_right_name_3);
        if (tmp_args_element_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 535;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_1, tmp_args_element_name_2);
        Py_DECREF(tmp_args_element_name_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_kwargs_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_called_name_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_name_2 == NULL)) {
            tmp_called_name_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_name_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_dict_key_1 = mod_consts[92];
        if (par_continue_mode_enable == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 536;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }

        tmp_dict_value_1 = par_continue_mode_enable;
        tmp_kwargs_name_1 = _PyDict_NewPresized( 18 );
        {
            PyObject *tmp_called_instance_2;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[93];
            if (var_commit_all == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 536;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = var_commit_all;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[94];
            CHECK_OBJECT(var_commit_index);
            tmp_dict_value_1 = var_commit_index;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[96];
            tmp_dict_value_1 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[84];
            tmp_dict_value_1 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[98];
            if (par_all_commit_direct == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_all_commit_direct;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[97];
            if (par_all_user_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_all_user_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[99];
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 537;
            tmp_dict_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[47]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[100];
            tmp_dict_value_1 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[102];
            tmp_dict_value_1 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[103];
            tmp_dict_value_1 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[28];
            if (par_video_oid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_video_oid;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[104];
            if (par_timestep_file == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_timestep_file;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[105];
            if (par_timestep_add_mode == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_timestep_add_mode;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[106];
            if (par_timestep_key_dire == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_timestep_key_dire;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[107];
            if (par_all_user_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_all_user_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[108];
            if (par_all_commit_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_all_commit_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[87];
            if (par_cookie_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 537;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_1;
            }

            tmp_dict_value_1 = par_cookie_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_kwargs_name_1);
        goto try_except_handler_3;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 536;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_2, tmp_kwargs_name_1);
        Py_DECREF(tmp_kwargs_name_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 536;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 536;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 536;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[109];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 536;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    Py_XDECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = par_all_commit_direct;
            par_all_commit_direct = tmp_assign_source_11;
            Py_INCREF(par_all_commit_direct);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = par_all_user_dict;
            par_all_user_dict = tmp_assign_source_12;
            Py_INCREF(par_all_user_dict);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 534;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_name_3;
        PyObject *tmp_subscript_name_3;
        CHECK_OBJECT(var_commit_data);
        tmp_expression_name_3 = var_commit_data;
        tmp_subscript_name_3 = mod_consts[199];
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_name_3, tmp_subscript_name_3);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 540;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_upper_data == NULL);
        var_upper_data = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_1 = mod_consts[200];
        CHECK_OBJECT(var_upper_data);
        tmp_called_instance_3 = var_upper_data;
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 541;
        tmp_compexpr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[113]);
        if (tmp_compexpr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_1, tmp_compexpr_left_1);
        Py_DECREF(tmp_compexpr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooooooooooooooo";
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
        CHECK_OBJECT(par_page_init);
        tmp_compexpr_left_2 = par_page_init;
        tmp_compexpr_right_2 = Py_True;
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_2, tmp_compexpr_right_2);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 541;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
        assert(tmp_condition_result_2 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_call_result_2;
        tmp_called_name_3 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_3 != NULL);
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 542;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_3, mod_consts[201]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_name_4;
        PyObject *tmp_subscript_name_4;
        if (var_upper_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[202]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 543;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_4 = var_upper_data;
        tmp_subscript_name_4 = mod_consts[200];
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_name_4, tmp_subscript_name_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_commit_all;
            var_commit_all = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT(var_commit_all);
        tmp_compexpr_left_3 = var_commit_all;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_3, tmp_compexpr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 544;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
        assert(tmp_condition_result_3 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[136];
        assert(var_is_top == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_is_top = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_name_4;
        PyObject *tmp_kwargs_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_called_name_4 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_name_4 == NULL)) {
            tmp_called_name_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_name_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_dict_key_2 = mod_consts[92];
        if (par_continue_mode_enable == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 546;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }

        tmp_dict_value_2 = par_continue_mode_enable;
        tmp_kwargs_name_2 = _PyDict_NewPresized( 18 );
        {
            PyObject *tmp_called_instance_4;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[28];
            if (par_video_oid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 546;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_video_oid;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[93];
            CHECK_OBJECT(var_commit_all);
            tmp_dict_value_2 = var_commit_all;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[94];
            tmp_dict_value_2 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[96];
            tmp_dict_value_2 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[84];
            tmp_dict_value_2 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[97];
            if (par_all_user_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 546;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_all_user_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[98];
            if (par_all_commit_direct == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_all_commit_direct;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[99];
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 547;
            tmp_dict_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[47]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[100];
            CHECK_OBJECT(var_is_top);
            tmp_dict_value_2 = var_is_top;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[102];
            tmp_dict_value_2 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[103];
            tmp_dict_value_2 = mod_consts[101];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[104];
            if (par_timestep_file == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_timestep_file;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[105];
            if (par_timestep_add_mode == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_timestep_add_mode;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[106];
            if (par_timestep_key_dire == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_timestep_key_dire;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[107];
            if (par_all_user_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_all_user_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[108];
            if (par_all_commit_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_all_commit_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[87];
            if (par_cookie_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 547;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_2;
            }

            tmp_dict_value_2 = par_cookie_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_kwargs_name_2);
        goto try_except_handler_5;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 546;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_4, tmp_kwargs_name_2);
        Py_DECREF(tmp_kwargs_name_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_16 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_16;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_17 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 546;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 546;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_18;
    }
    {
        PyObject *tmp_iterator_name_2;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_2); assert(HAS_ITERNEXT(tmp_iterator_name_2));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_2)->tp_iternext)(tmp_iterator_name_2);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 546;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[109];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 546;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = par_all_commit_direct;
            par_all_commit_direct = tmp_assign_source_19;
            Py_INCREF(par_all_commit_direct);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = par_all_user_dict;
            par_all_user_dict = tmp_assign_source_20;
            Py_INCREF(par_all_user_dict);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    branch_no_3:;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        tmp_compexpr_left_4 = mod_consts[203];
        CHECK_OBJECT(var_commit_data);
        tmp_called_instance_5 = var_commit_data;
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 549;
        tmp_compexpr_right_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[113]);
        if (tmp_compexpr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_compexpr_right_4, tmp_compexpr_left_4);
        Py_DECREF(tmp_compexpr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_page_init);
        tmp_compexpr_left_5 = par_page_init;
        tmp_compexpr_right_5 = Py_True;
        tmp_and_right_value_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_5, tmp_compexpr_right_5);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_4 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
        assert(tmp_condition_result_4 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = mod_consts[45];
        {
            PyObject *old = var_commit_index;
            var_commit_index = tmp_assign_source_21;
            Py_INCREF(var_commit_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_expression_name_5;
        PyObject *tmp_subscript_name_5;
        if (var_commit_data == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[196]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 551;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_name_5 = var_commit_data;
        tmp_subscript_name_5 = mod_consts[203];
        tmp_assign_source_22 = LOOKUP_SUBSCRIPT(tmp_expression_name_5, tmp_subscript_name_5);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 551;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_commit_all;
            var_commit_all = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        CHECK_OBJECT(var_commit_all);
        tmp_compexpr_left_6 = var_commit_all;
        tmp_compexpr_right_6 = Py_None;
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_compexpr_left_6, tmp_compexpr_right_6);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
        assert(tmp_condition_result_5 != NUITKA_BOOL_UNASSIGNED);
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(var_commit_all);
        tmp_len_arg_3 = var_commit_all;
        tmp_assign_source_23 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 553;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_number == NULL);
        var_total_number = tmp_assign_source_23;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_3;
        tmp_called_name_5 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_5 != NULL);
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 554;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_5, mod_consts[204]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_2;
        PyObject *tmp_xrange_high_2;
        tmp_xrange_low_2 = mod_consts[45];
        CHECK_OBJECT(var_total_number);
        tmp_xrange_high_2 = var_total_number;
        tmp_iter_arg_4 = BUILTIN_XRANGE2(tmp_xrange_low_2, tmp_xrange_high_2);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_24;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_25 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_25 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooo";
                exception_lineno = 555;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_25;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_26 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_commit_index;
            var_commit_index = tmp_assign_source_26;
            Py_INCREF(var_commit_index);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_left_name_5;
        PyObject *tmp_left_name_6;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_5;
        PyObject *tmp_unicode_arg_3;
        PyObject *tmp_right_name_6;
        PyObject *tmp_right_name_7;
        PyObject *tmp_unicode_arg_4;
        tmp_called_name_6 = LOOKUP_BUILTIN(mod_consts[7]);
        assert(tmp_called_name_6 != NULL);
        tmp_left_name_7 = mod_consts[205];
        CHECK_OBJECT(var_commit_index);
        tmp_unicode_arg_3 = var_commit_index;
        tmp_right_name_5 = PyObject_Unicode(tmp_unicode_arg_3);
        if (tmp_right_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_left_name_6 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_left_name_7, tmp_right_name_5);
        Py_DECREF(tmp_right_name_5);
        if (tmp_left_name_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_right_name_6 = mod_consts[81];
        tmp_left_name_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_left_name_6, tmp_right_name_6);
        Py_DECREF(tmp_left_name_6);
        if (tmp_left_name_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_total_number == NULL) {
            Py_DECREF(tmp_left_name_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[206]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 557;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_unicode_arg_4 = var_total_number;
        tmp_right_name_7 = PyObject_Unicode(tmp_unicode_arg_4);
        if (tmp_right_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_left_name_5);

            exception_lineno = 557;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_args_element_name_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_left_name_5, tmp_right_name_7);
        Py_DECREF(tmp_left_name_5);
        Py_DECREF(tmp_right_name_7);
        if (tmp_args_element_name_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 556;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_name_6, tmp_args_element_name_3);
        Py_DECREF(tmp_args_element_name_3);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 556;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_4);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_kwargs_name_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_called_name_7 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_name_7 == NULL)) {
            tmp_called_name_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_name_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_dict_key_3 = mod_consts[92];
        if (par_continue_mode_enable == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[92]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 558;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }

        tmp_dict_value_3 = par_continue_mode_enable;
        tmp_kwargs_name_3 = _PyDict_NewPresized( 18 );
        {
            PyObject *tmp_called_instance_6;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[28];
            if (par_video_oid == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[28]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 558;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_video_oid;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[93];
            if (var_commit_all == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[93]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 558;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = var_commit_all;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[94];
            CHECK_OBJECT(var_commit_index);
            tmp_dict_value_3 = var_commit_index;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[96];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[84];
            tmp_dict_value_3 = mod_consts[110];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[97];
            if (par_all_user_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_all_user_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[98];
            if (par_all_commit_direct == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_all_commit_direct;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[99];
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 559;
            tmp_dict_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[47]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[100];
            tmp_dict_value_3 = Py_False;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[102];
            tmp_dict_value_3 = Py_True;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[103];
            tmp_dict_value_3 = mod_consts[136];
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[104];
            if (par_timestep_file == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[104]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_timestep_file;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[105];
            if (par_timestep_add_mode == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[105]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_timestep_add_mode;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[106];
            if (par_timestep_key_dire == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_timestep_key_dire;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[107];
            if (par_all_user_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[107]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_all_user_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[108];
            if (par_all_commit_full_timestep_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[108]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_all_commit_full_timestep_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[87];
            if (par_cookie_dict == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[87]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 559;
                type_description_1 = "oooooooooooooooooooo";
                goto dict_build_exception_3;
            }

            tmp_dict_value_3 = par_cookie_dict;
            tmp_res = PyDict_SetItem(tmp_kwargs_name_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_kwargs_name_3);
        goto try_except_handler_8;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame.f_lineno = 558;
        tmp_iter_arg_5 = CALL_FUNCTION_WITH_KEYARGS(tmp_called_name_7, tmp_kwargs_name_3);
        Py_DECREF(tmp_kwargs_name_3);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        tmp_assign_source_27 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_28 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
        if (tmp_assign_source_28 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 558;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 558;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_3); assert(HAS_ITERNEXT(tmp_iterator_name_3));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_3)->tp_iternext)(tmp_iterator_name_3);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "oooooooooooooooooooo";
                    exception_lineno = 558;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[109];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooo";
            exception_lineno = 558;
            goto try_except_handler_9;
        }
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_8;
    // End of try:
    try_end_6:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_30 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = par_all_commit_direct;
            par_all_commit_direct = tmp_assign_source_30;
            Py_INCREF(par_all_commit_direct);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_31 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = par_all_user_dict;
            par_all_user_dict = tmp_assign_source_31;
            Py_INCREF(par_all_user_dict);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 555;
        type_description_1 = "oooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    Py_XDECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    branch_no_5:;
    branch_no_4:;
    {
        PyObject *tmp_tuple_element_1;
        if (par_all_commit_direct == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[98]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 561;
            type_description_1 = "oooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = par_all_commit_direct;
        tmp_return_value = PyTuple_New(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (par_all_user_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[97]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 561;
            type_description_1 = "oooooooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = par_all_user_dict;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3255088c1f31dd297e8d983c3d9df6e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_3255088c1f31dd297e8d983c3d9df6e4);
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION(frame_3255088c1f31dd297e8d983c3d9df6e4);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3255088c1f31dd297e8d983c3d9df6e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3255088c1f31dd297e8d983c3d9df6e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3255088c1f31dd297e8d983c3d9df6e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3255088c1f31dd297e8d983c3d9df6e4,
        type_description_1,
        par_continue_mode_enable,
        par_f,
        par_page_init,
        par_is_file,
        par_json_data,
        par_all_commit_direct,
        par_all_user_dict,
        par_video_oid,
        par_timestep_file,
        par_timestep_add_mode,
        par_timestep_key_dire,
        par_all_user_full_timestep_dict,
        par_all_commit_full_timestep_dict,
        par_cookie_dict,
        var_commit_data,
        var_commit_all,
        var_commit_index,
        var_upper_data,
        var_is_top,
        var_total_number
    );


    // Release cached frame if used for exception.
    if (frame_3255088c1f31dd297e8d983c3d9df6e4 == cache_frame_3255088c1f31dd297e8d983c3d9df6e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif

        Py_DECREF(cache_frame_3255088c1f31dd297e8d983c3d9df6e4);
        cache_frame_3255088c1f31dd297e8d983c3d9df6e4 = NULL;
    }

    assertFrameObject(frame_3255088c1f31dd297e8d983c3d9df6e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_continue_mode_enable);
    par_continue_mode_enable = NULL;
    Py_XDECREF(par_f);
    par_f = NULL;
    CHECK_OBJECT(par_page_init);
    Py_DECREF(par_page_init);
    par_page_init = NULL;
    CHECK_OBJECT(par_is_file);
    Py_DECREF(par_is_file);
    par_is_file = NULL;
    CHECK_OBJECT(par_json_data);
    Py_DECREF(par_json_data);
    par_json_data = NULL;
    Py_XDECREF(par_all_commit_direct);
    par_all_commit_direct = NULL;
    Py_XDECREF(par_all_user_dict);
    par_all_user_dict = NULL;
    Py_XDECREF(par_video_oid);
    par_video_oid = NULL;
    Py_XDECREF(par_timestep_file);
    par_timestep_file = NULL;
    Py_XDECREF(par_timestep_add_mode);
    par_timestep_add_mode = NULL;
    Py_XDECREF(par_timestep_key_dire);
    par_timestep_key_dire = NULL;
    Py_XDECREF(par_all_user_full_timestep_dict);
    par_all_user_full_timestep_dict = NULL;
    Py_XDECREF(par_all_commit_full_timestep_dict);
    par_all_commit_full_timestep_dict = NULL;
    Py_XDECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    Py_XDECREF(var_commit_data);
    var_commit_data = NULL;
    Py_XDECREF(var_commit_all);
    var_commit_all = NULL;
    Py_XDECREF(var_commit_index);
    var_commit_index = NULL;
    Py_XDECREF(var_upper_data);
    var_upper_data = NULL;
    Py_XDECREF(var_is_top);
    var_is_top = NULL;
    Py_XDECREF(var_total_number);
    var_total_number = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_continue_mode_enable);
    par_continue_mode_enable = NULL;
    Py_XDECREF(par_f);
    par_f = NULL;
    CHECK_OBJECT(par_page_init);
    Py_DECREF(par_page_init);
    par_page_init = NULL;
    CHECK_OBJECT(par_is_file);
    Py_DECREF(par_is_file);
    par_is_file = NULL;
    Py_XDECREF(par_json_data);
    par_json_data = NULL;
    Py_XDECREF(par_all_commit_direct);
    par_all_commit_direct = NULL;
    Py_XDECREF(par_all_user_dict);
    par_all_user_dict = NULL;
    Py_XDECREF(par_video_oid);
    par_video_oid = NULL;
    Py_XDECREF(par_timestep_file);
    par_timestep_file = NULL;
    Py_XDECREF(par_timestep_add_mode);
    par_timestep_add_mode = NULL;
    Py_XDECREF(par_timestep_key_dire);
    par_timestep_key_dire = NULL;
    Py_XDECREF(par_all_user_full_timestep_dict);
    par_all_user_full_timestep_dict = NULL;
    Py_XDECREF(par_all_commit_full_timestep_dict);
    par_all_commit_full_timestep_dict = NULL;
    Py_XDECREF(par_cookie_dict);
    par_cookie_dict = NULL;
    Py_XDECREF(var_commit_data);
    var_commit_data = NULL;
    Py_XDECREF(var_commit_all);
    var_commit_all = NULL;
    Py_XDECREF(var_commit_index);
    var_commit_index = NULL;
    Py_XDECREF(var_upper_data);
    var_upper_data = NULL;
    Py_XDECREF(var_is_top);
    var_is_top = NULL;
    Py_XDECREF(var_total_number);
    var_total_number = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

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



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__1_get_proxy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__1_get_proxy,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b87b9482fbf3193b44cb322b84d87dea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__2_delete_proxy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__2_delete_proxy,
        mod_consts[214],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_abb6819ce1e4c179978cb28954e52abc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__3_init() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__3_init,
        mod_consts[215],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c66613e2115840072bebde549c83d5f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__4_video_info() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__4_video_info,
        mod_consts[216],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9fc98e0e58c44d43579ddf02e543dd2b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__5_detect_replies() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__5_detect_replies,
        mod_consts[183],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_758485e474914a938407d2a5a7433807,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__6_reply_get_online() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__6_reply_get_online,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7acd605691a0a304d6278f461994bfc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__7_commit_info(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__7_commit_info,
        mod_consts[91],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bf1283372902174afa8fadb130e17256,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_api_commit_get$$$function__8_commit_json_ana() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_api_commit_get$$$function__8_commit_json_ana,
        mod_consts[218],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3255088c1f31dd297e8d983c3d9df6e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_api_commit_get,
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

function_impl_code functable_api_commit_get[] = {
    impl_api_commit_get$$$function__1_get_proxy,
    impl_api_commit_get$$$function__2_delete_proxy,
    impl_api_commit_get$$$function__3_init,
    impl_api_commit_get$$$function__4_video_info,
    impl_api_commit_get$$$function__5_detect_replies,
    impl_api_commit_get$$$function__6_reply_get_online,
    impl_api_commit_get$$$function__7_commit_info,
    impl_api_commit_get$$$function__8_commit_json_ana,
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

    function_impl_code *current = functable_api_commit_get;
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

    if (offset > sizeof(functable_api_commit_get) || offset < 0) {
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
        functable_api_commit_get[offset],
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
        module_api_commit_get,
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
PyObject *modulecode_api_commit_get(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *module_entry) {
    module_api_commit_get = module;

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
    PRINT_STRING("api_commit_get: Calling setupMetaPathBasedLoader().\n");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("api_commit_get: Calling createModuleConstants().\n");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    PRINT_STRING("api_commit_get: Calling createModuleCodeObjects().\n");
#endif
    createModuleCodeObjects();

    // PRINT_STRING("in initapi_commit_get\n");

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.

    moduledict_api_commit_get = MODULE_DICT(module_api_commit_get);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(module_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_api_commit_get,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_api_commit_get,
            (Nuitka_StringObject *)const_str_plain___package__,
            const_str_empty
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_api_commit_get,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_api_commit_get,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_api_commit_get,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_api_commit_get);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

#if PYTHON_VERSION >= 0x300
    UPDATE_STRING_DICT0(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);
#endif

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_api_commit_get);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_6002f8737681473995a6868b06544350;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[208];
        UPDATE_STRING_DICT0(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[209], tmp_assign_source_2);
    }
    // Frame without reuse.
    frame_6002f8737681473995a6868b06544350 = MAKE_MODULE_FRAME(codeobj_6002f8737681473995a6868b06544350, module_api_commit_get);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack(frame_6002f8737681473995a6868b06544350);
    assert(Py_REFCNT(frame_6002f8737681473995a6868b06544350) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = mod_consts[208];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[211], tmp_assattr_name_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[210]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[210]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[212], tmp_assattr_name_2);
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
        UPDATE_STRING_DICT0(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_arg_name_1;
        PyObject *tmp_locals_arg_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = mod_consts[66];
        tmp_globals_arg_name_1 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = mod_consts[45];
        frame_6002f8737681473995a6868b06544350->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_name_1, tmp_globals_arg_name_1, tmp_locals_arg_name_1, tmp_fromlist_name_1, tmp_level_name_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_arg_name_2;
        PyObject *tmp_locals_arg_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = mod_consts[0];
        tmp_globals_arg_name_2 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = mod_consts[45];
        frame_6002f8737681473995a6868b06544350->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_name_2, tmp_globals_arg_name_2, tmp_locals_arg_name_2, tmp_fromlist_name_2, tmp_level_name_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_arg_name_3;
        PyObject *tmp_locals_arg_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = mod_consts[47];
        tmp_globals_arg_name_3 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = mod_consts[45];
        frame_6002f8737681473995a6868b06544350->m_frame.f_lineno = 5;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_name_3, tmp_globals_arg_name_3, tmp_locals_arg_name_3, tmp_fromlist_name_3, tmp_level_name_3);
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_arg_name_4;
        PyObject *tmp_locals_arg_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = mod_consts[43];
        tmp_globals_arg_name_4 = (PyObject *)moduledict_api_commit_get;
        tmp_locals_arg_name_4 = Py_None;
        tmp_fromlist_name_4 = mod_consts[44];
        tmp_level_name_4 = mod_consts[45];
        frame_6002f8737681473995a6868b06544350->m_frame.f_lineno = 6;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_name_4, tmp_globals_arg_name_4, tmp_locals_arg_name_4, tmp_fromlist_name_4, tmp_level_name_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_api_commit_get,
                mod_consts[46],
                mod_consts[45]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[46]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_7);
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6002f8737681473995a6868b06544350);
#endif
    popFrameStack();

    assertFrameObject(frame_6002f8737681473995a6868b06544350);

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION(frame_6002f8737681473995a6868b06544350);
#endif

    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6002f8737681473995a6868b06544350, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6002f8737681473995a6868b06544350->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6002f8737681473995a6868b06544350, exception_lineno);
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_api_commit_get$$$function__1_get_proxy();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_api_commit_get$$$function__2_delete_proxy();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[214], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_api_commit_get$$$function__3_init();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_api_commit_get$$$function__4_video_info();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_api_commit_get$$$function__5_detect_replies();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_api_commit_get$$$function__6_reply_get_online();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[217];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_14 = MAKE_FUNCTION_api_commit_get$$$function__7_commit_info(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_api_commit_get$$$function__8_commit_json_ana();

        UPDATE_STRING_DICT1(moduledict_api_commit_get, (Nuitka_StringObject *)mod_consts[218], tmp_assign_source_15);
    }

    return module_api_commit_get;
    module_exception_exit:
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}

