// HuashuScriptEvaluator.h -- execute what's given in a config file

#pragma once

#include "Basics.h"
#include "ScriptableObjects.h"
#include "HuashuScriptParser.h"

#include <memory> // for shared_ptr

namespace EasyCheng { namespace GEEKLAB { namespace BS {

using namespace std;
using namespace EasyCheng::GEEKLAB::ScriptableObjects;

// -----------------------------------------------------------------------
// functions exposed by this module
// -----------------------------------------------------------------------

// understand and execute from the syntactic expression tree
ConfigValuePtr Evaluate(ExpressionPtr);                               // evaluate the expression tree
void Do(ExpressionPtr e);                                             // evaluate e.do
shared_ptr<Object> EvaluateField(ExpressionPtr e, const wstring& id); // for experimental EASYGEN integration

}}} // end namespaces
