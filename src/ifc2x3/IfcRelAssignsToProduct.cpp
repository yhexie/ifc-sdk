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

#include "ifc2x3/IfcRelAssignsToProduct.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcProduct.h"
#include "ifc2x3/IfcRelAssigns.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcRelAssignsToProduct::IfcRelAssignsToProduct(Step::Id id, Step::SPFData *args) : IfcRelAssigns(id, args) {
    m_relatingProduct = NULL;
}

IfcRelAssignsToProduct::~IfcRelAssignsToProduct() {
}

bool IfcRelAssignsToProduct::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcRelAssignsToProduct(this);
}

const std::string &IfcRelAssignsToProduct::type() const {
    return IfcRelAssignsToProduct::s_type.getName();
}

const Step::ClassType &IfcRelAssignsToProduct::getClassType() {
    return IfcRelAssignsToProduct::s_type;
}

const Step::ClassType &IfcRelAssignsToProduct::getType() const {
    return IfcRelAssignsToProduct::s_type;
}

bool IfcRelAssignsToProduct::isOfType(const Step::ClassType &t) const {
    return IfcRelAssignsToProduct::s_type == t ? true : IfcRelAssigns::isOfType(t);
}

IfcProduct *IfcRelAssignsToProduct::getRelatingProduct() {
    if (Step::BaseObject::inited()) {
        return m_relatingProduct.get();
    }
    else {
        return NULL;
    }
}

const IfcProduct *IfcRelAssignsToProduct::getRelatingProduct() const {
    IfcRelAssignsToProduct * deConstObject = const_cast< IfcRelAssignsToProduct * > (this);
    return deConstObject->getRelatingProduct();
}

void IfcRelAssignsToProduct::setRelatingProduct(const Step::RefPtr< IfcProduct > &value) {
    if (m_relatingProduct.valid()) {
        m_relatingProduct->m_referencedBy.erase(this);
    }
    if (value.valid()) {
        value->m_referencedBy.insert(this);
    }
    m_relatingProduct = value;
}

void IfcRelAssignsToProduct::unsetRelatingProduct() {
    m_relatingProduct = Step::getUnset(getRelatingProduct());
}

bool IfcRelAssignsToProduct::testRelatingProduct() const {
    return !Step::isUnset(getRelatingProduct());
}

bool IfcRelAssignsToProduct::init() {
    bool status = IfcRelAssigns::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_relatingProduct = NULL;
    }
    else {
        m_relatingProduct = static_cast< IfcProduct * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcRelAssignsToProduct::copy(const IfcRelAssignsToProduct &obj, const CopyOp &copyop) {
    IfcRelAssigns::copy(obj, copyop);
    setRelatingProduct((IfcProduct*)copyop(obj.m_relatingProduct.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcRelAssignsToProduct::s_type("IfcRelAssignsToProduct");
