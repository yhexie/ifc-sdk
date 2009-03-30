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

#include "ifc2x3/IfcTypeProduct.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcRepresentationMap.h"
#include "ifc2x3/IfcTypeObject.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/String.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcTypeProduct::IfcTypeProduct(Step::Id id, Step::SPFData *args) : IfcTypeObject(id, args) {
    m_representationMaps.setUnset(true);
    m_tag = Step::getUnset(m_tag);
}

IfcTypeProduct::~IfcTypeProduct() {
}

bool IfcTypeProduct::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTypeProduct(this);
}

const std::string &IfcTypeProduct::type() const {
    return IfcTypeProduct::s_type.getName();
}

const Step::ClassType &IfcTypeProduct::getClassType() {
    return IfcTypeProduct::s_type;
}

const Step::ClassType &IfcTypeProduct::getType() const {
    return IfcTypeProduct::s_type;
}

bool IfcTypeProduct::isOfType(const Step::ClassType &t) const {
    return IfcTypeProduct::s_type == t ? true : IfcTypeObject::isOfType(t);
}

List_IfcRepresentationMap_1_n &IfcTypeProduct::getRepresentationMaps() {
    if (Step::BaseObject::inited()) {
        return m_representationMaps;
    }
    else {
        m_representationMaps.setUnset(true);
        return m_representationMaps;
    }
}

const List_IfcRepresentationMap_1_n &IfcTypeProduct::getRepresentationMaps() const {
    IfcTypeProduct * deConstObject = const_cast< IfcTypeProduct * > (this);
    return deConstObject->getRepresentationMaps();
}

void IfcTypeProduct::setRepresentationMaps(const List_IfcRepresentationMap_1_n &value) {
    m_representationMaps = value;
}

void IfcTypeProduct::unsetRepresentationMaps() {
    m_representationMaps.clear();
    m_representationMaps.setUnset(true);
}

bool IfcTypeProduct::testRepresentationMaps() const {
    return !Step::isUnset(getRepresentationMaps());
}

IfcLabel IfcTypeProduct::getTag() {
    if (Step::BaseObject::inited()) {
        return m_tag;
    }
    else {
        return Step::getUnset(m_tag);
    }
}

const IfcLabel IfcTypeProduct::getTag() const {
    IfcTypeProduct * deConstObject = const_cast< IfcTypeProduct * > (this);
    return deConstObject->getTag();
}

void IfcTypeProduct::setTag(const IfcLabel &value) {
    m_tag = value;
}

void IfcTypeProduct::unsetTag() {
    m_tag = Step::getUnset(getTag());
}

bool IfcTypeProduct::testTag() const {
    return !Step::isUnset(getTag());
}

bool IfcTypeProduct::init() {
    bool status = IfcTypeObject::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_representationMaps.setUnset(true);
    }
    else {
        m_representationMaps.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcRepresentationMap > attr2;
                attr2 = static_cast< IfcRepresentationMap * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_representationMaps.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_tag = Step::getUnset(m_tag);
    }
    else {
        m_tag = Step::String::fromSPF(arg);
    }
    return true;
}

void IfcTypeProduct::copy(const IfcTypeProduct &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcRepresentationMap >, 1 >::const_iterator it_m_representationMaps;
    IfcTypeObject::copy(obj, copyop);
    for (it_m_representationMaps = obj.m_representationMaps.begin(); it_m_representationMaps != obj.m_representationMaps.end(); ++it_m_representationMaps) {
        Step::RefPtr< IfcRepresentationMap > copyTarget = (IfcRepresentationMap *) (copyop((*it_m_representationMaps).get()));
        m_representationMaps.push_back(copyTarget.get());
    }
    setTag(obj.m_tag);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTypeProduct::s_type("IfcTypeProduct");
