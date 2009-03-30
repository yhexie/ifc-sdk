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

#include "ifc2x3/IfcTransportElement.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcElement.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcTransportElement::IfcTransportElement(Step::Id id, Step::SPFData *args) : IfcElement(id, args) {
    m_operationType = IfcTransportElementTypeEnum_UNSET;
    m_capacityByWeight = Step::getUnset(m_capacityByWeight);
    m_capacityByNumber = Step::getUnset(m_capacityByNumber);
}

IfcTransportElement::~IfcTransportElement() {
}

bool IfcTransportElement::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcTransportElement(this);
}

const std::string &IfcTransportElement::type() const {
    return IfcTransportElement::s_type.getName();
}

const Step::ClassType &IfcTransportElement::getClassType() {
    return IfcTransportElement::s_type;
}

const Step::ClassType &IfcTransportElement::getType() const {
    return IfcTransportElement::s_type;
}

bool IfcTransportElement::isOfType(const Step::ClassType &t) const {
    return IfcTransportElement::s_type == t ? true : IfcElement::isOfType(t);
}

IfcTransportElementTypeEnum IfcTransportElement::getOperationType() {
    if (Step::BaseObject::inited()) {
        return m_operationType;
    }
    else {
        return IfcTransportElementTypeEnum_UNSET;
    }
}

const IfcTransportElementTypeEnum IfcTransportElement::getOperationType() const {
    IfcTransportElement * deConstObject = const_cast< IfcTransportElement * > (this);
    return deConstObject->getOperationType();
}

void IfcTransportElement::setOperationType(IfcTransportElementTypeEnum value) {
    m_operationType = value;
}

void IfcTransportElement::unsetOperationType() {
    m_operationType = IfcTransportElementTypeEnum_UNSET;
}

bool IfcTransportElement::testOperationType() const {
    return getOperationType() != IfcTransportElementTypeEnum_UNSET;
}

IfcMassMeasure IfcTransportElement::getCapacityByWeight() {
    if (Step::BaseObject::inited()) {
        return m_capacityByWeight;
    }
    else {
        return Step::getUnset(m_capacityByWeight);
    }
}

const IfcMassMeasure IfcTransportElement::getCapacityByWeight() const {
    IfcTransportElement * deConstObject = const_cast< IfcTransportElement * > (this);
    return deConstObject->getCapacityByWeight();
}

void IfcTransportElement::setCapacityByWeight(IfcMassMeasure value) {
    m_capacityByWeight = value;
}

void IfcTransportElement::unsetCapacityByWeight() {
    m_capacityByWeight = Step::getUnset(getCapacityByWeight());
}

bool IfcTransportElement::testCapacityByWeight() const {
    return !Step::isUnset(getCapacityByWeight());
}

IfcCountMeasure IfcTransportElement::getCapacityByNumber() {
    if (Step::BaseObject::inited()) {
        return m_capacityByNumber;
    }
    else {
        return Step::getUnset(m_capacityByNumber);
    }
}

const IfcCountMeasure IfcTransportElement::getCapacityByNumber() const {
    IfcTransportElement * deConstObject = const_cast< IfcTransportElement * > (this);
    return deConstObject->getCapacityByNumber();
}

void IfcTransportElement::setCapacityByNumber(IfcCountMeasure value) {
    m_capacityByNumber = value;
}

void IfcTransportElement::unsetCapacityByNumber() {
    m_capacityByNumber = Step::getUnset(getCapacityByNumber());
}

bool IfcTransportElement::testCapacityByNumber() const {
    return !Step::isUnset(getCapacityByNumber());
}

bool IfcTransportElement::init() {
    bool status = IfcElement::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_operationType = IfcTransportElementTypeEnum_UNSET;
    }
    else {
        if (arg == ".ELEVATOR.") {
            m_operationType = IfcTransportElementTypeEnum_ELEVATOR;
        }
        else if (arg == ".ESCALATOR.") {
            m_operationType = IfcTransportElementTypeEnum_ESCALATOR;
        }
        else if (arg == ".MOVINGWALKWAY.") {
            m_operationType = IfcTransportElementTypeEnum_MOVINGWALKWAY;
        }
        else if (arg == ".USERDEFINED.") {
            m_operationType = IfcTransportElementTypeEnum_USERDEFINED;
        }
        else if (arg == ".NOTDEFINED.") {
            m_operationType = IfcTransportElementTypeEnum_NOTDEFINED;
        }
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_capacityByWeight = Step::getUnset(m_capacityByWeight);
    }
    else {
        m_capacityByWeight = Step::spfToReal(arg);
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_capacityByNumber = Step::getUnset(m_capacityByNumber);
    }
    else {
        m_capacityByNumber = Step::spfToInteger(arg);
    }
    return true;
}

void IfcTransportElement::copy(const IfcTransportElement &obj, const CopyOp &copyop) {
    IfcElement::copy(obj, copyop);
    setOperationType(obj.m_operationType);
    setCapacityByWeight(obj.m_capacityByWeight);
    setCapacityByNumber(obj.m_capacityByNumber);
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcTransportElement::s_type("IfcTransportElement");
