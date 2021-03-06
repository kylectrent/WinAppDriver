//******************************************************************************
//
// Copyright (c) 2018 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers
// Windows Header Files:
#include <windows.h>
#include <atlbase.h>
#include <UIAutomation.h>
#include <UIAutomationClient.h>

// TODO: reference additional headers your program requires here
#include <string>
#include <vector>
#include <regex>
#include <iostream>
#include <sstream>
#include <map>

typedef void (CALLBACK *HookProc)(int code, WPARAM w, LPARAM l);
extern HMODULE g_hModule;

#define REQUIRE_SUCCESS_HR(hr)                                                                                                               \
    do                                                                                                                                            \
    {                                                                                                                                             \
        HRESULT __hr = (hr);                                                                                                                      \
        if (FAILED(__hr))                                                                                                                         \
        {                                                                                                                                         \
            std::cout << "hr:" << std::hex << (unsigned int)hr << ", LINE:" << __LINE__ << ", FUNC:" << __FUNCTION__;                             \
            return hr;                                                                                                                            \
        }                                                                                                                                         \
    } while (false)