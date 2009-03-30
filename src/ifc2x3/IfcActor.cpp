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

#include "ifc2x3/IfcActor.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcActorSelect.h"
#include "ifc2x3/IfcObject.h"
#include "ifc2x3/IfcRelAssignsToActor.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace ifc2x3;

IfcActor::IfcActor(Step::Id id, Step::SPFData *args) : IfcObject(id, args) {
    m_theActor = NULL;
}

IfcActor::~IfcActor() {
}

bool IfcActor::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcActor(this);
}

const std::string &IfcActor::type() const {
    return IfcActor::s_type.getName();
}

const Step::ClassType &IfcActor::getClassType() {
    return IfcActor::s_type;
}

const Step::ClassType &IfcActor::getType() const {
    return IfcActor::s_type;
}

bool IfcActor::isOfType(const Step::ClassType &t) const {
    return IfcActor::s_type == t ? true : IfcObject::isOfType(t);
}

IfcActorSelect *IfcActor::getTheActor() {
    if (Step::BaseObject::inited()) {
        return m_theActor.get();
    }
    else {
        return NULL;
    }
}

const IfcActorSelect *IfcActor::getTheActor() const {
    IfcActor * deConstObject = const_cast< IfcActor * > (this);
    return deConstObject->getTheActor();
}

void IfcActor::setTheActor(const Step::RefPtr< IfcActorSelect > &value) {
    m_theActor = value;
}

void IfcActor::unsetTheActor() {
    m_theActor = Step::getUnset(getTheActor());
}

bool IfcActor::testTheActor() const {
    return !Step::isUnset(getTheActor());
}

Inverse_Set_IfcRelAssignsToActor_0_n &IfcActor::getIsActingUpon() {
    if (Step::BaseObject::inited()) {
        return m_isActingUpon;
    }
    else {
        m_isActingUpon.setUnset(true);
        return m_isActingUpon;
    }
}

const Inverse_Set_IfcRelAssignsToActor_0_n &IfcActor::getIsActingUpon() const {
    IfcActor * deConstObject = const_cast< IfcActor * > (this);
    return deConstObject->getIsActingUpon();
}

bool IfcActor::testIsActingUpon() const {
    return !Step::isUnset(getIsActingUpon());
}

bool IfcActor::init() {
    bool status = IfcObject::init();
    std::string arg;
    std::vector< Step::Id > *inverses;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_theActor = NULL;
    }
    else {
        m_theActor = new IfcActorSelect;
        if (arg[0] == '#') {
            m_theActor->set(m_expressDataSet->get(atoi(arg.c_str() + 1)));
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
    inverses = m_args->getInverses(IfcRelAssignsToActor::getClassType(), 6);
    if (inverses) {
        unsigned int i;
        m_isActingUpon.setUnset(false);
        for (i = 0; i < inverses->size(); i++) {
            m_isActingUpon.insert(static_cast< IfcRelAssignsToActor * > (m_expressDataSet->get((*inverses)[i])));
        }
    }
    return true;
}

void IfcActor::copy(const IfcActor &obj, const CopyOp &copyop) {
    IfcObject::copy(obj, copyop);
    m_theActor = new IfcActorSelect;
    m_theActor->copy(*(obj.m_theActor.get()), copyop);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcActor::s_type("IfcActor");
