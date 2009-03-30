/*
//////////////////////////////////
// This File has been generated //
// by Expressik light generator //
//  Powered by : Eve CSTB       //
//////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2009 CSTB                                             *
 *                                                                         *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Mod-Eve, CSTB                                                   *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#include "ifc2x3/IfcRelAssociatesClassification.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcClassificationNotationSelect.h"
#include "ifc2x3/IfcRelAssociates.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>

using namespace ifc2x3;

IfcRelAssociatesClassification::IfcRelAssociatesClassification(Step::Id id, Step::SPFData *args) : IfcRelAssociates(id, args) {
    m_relatingClassification = NULL;
}

IfcRelAssociatesClassification::~IfcRelAssociatesClassification() {
}

bool IfcRelAssociatesClassification::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssociatesClassification(this);
}

const std::string &IfcRelAssociatesClassification::type() const {
    return IfcRelAssociatesClassification::s_type.getName();
}

const Step::ClassType &IfcRelAssociatesClassification::getClassType() {
    return IfcRelAssociatesClassification::s_type;
}

const Step::ClassType &IfcRelAssociatesClassification::getType() const {
    return IfcRelAssociatesClassification::s_type;
}

bool IfcRelAssociatesClassification::isOfType(const Step::ClassType &t) const {
    return IfcRelAssociatesClassification::s_type == t ? true : IfcRelAssociates::isOfType(t);
}

IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification() {
    if (Step::BaseObject::inited()) {
        return m_relatingClassification.get();
    }
    else {
        return NULL;
    }
}

const IfcClassificationNotationSelect *IfcRelAssociatesClassification::getRelatingClassification() const {
    IfcRelAssociatesClassification * deConstObject = const_cast< IfcRelAssociatesClassification * > (this);
    return deConstObject->getRelatingClassification();
}

void IfcRelAssociatesClassification::setRelatingClassification(const Step::RefPtr< IfcClassificationNotationSelect > &value) {
    m_relatingClassification = value;
}

void IfcRelAssociatesClassification::unsetRelatingClassification() {
    m_relatingClassification = Step::getUnset(getRelatingClassification());
}

bool IfcRelAssociatesClassification::testRelatingClassification() const {
    return !Step::isUnset(getRelatingClassification());
}

bool IfcRelAssociatesClassification::init() {
    bool status = IfcRelAssociates::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingClassification = NULL;
    }
    else {
        m_relatingClassification = new IfcClassificationNotationSelect;
        if (arg[0] == '#') {
            m_relatingClassification->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
        }
        else if (arg[arg.length() - 1] == ')') {
            std::string type1;
            unsigned int i1;
            i1 = arg.find('(');
            if (i1 != std::string::npos) {
                type1 = arg.substr(0, i1);
                arg = arg.substr(i1 + 1, arg.length() - i1 - 2);
            }
        }
    }
    return true;
}

void IfcRelAssociatesClassification::copy(const IfcRelAssociatesClassification &obj, const CopyOp &copyop) {
    IfcRelAssociates::copy(obj, copyop);
    m_relatingClassification = new IfcClassificationNotationSelect;
    m_relatingClassification->copy(*(obj.m_relatingClassification.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssociatesClassification::s_type("IfcRelAssociatesClassification");
