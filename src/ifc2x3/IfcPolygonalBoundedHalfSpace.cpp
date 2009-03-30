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

#include "ifc2x3/IfcPolygonalBoundedHalfSpace.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcAxis2Placement3D.h"
#include "ifc2x3/IfcBoundedCurve.h"
#include "ifc2x3/IfcHalfSpaceSolid.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcPolygonalBoundedHalfSpace::IfcPolygonalBoundedHalfSpace(Step::Id id, Step::SPFData *args) : IfcHalfSpaceSolid(id, args) {
    m_position = NULL;
    m_polygonalBoundary = NULL;
}

IfcPolygonalBoundedHalfSpace::~IfcPolygonalBoundedHalfSpace() {
}

bool IfcPolygonalBoundedHalfSpace::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcPolygonalBoundedHalfSpace(this);
}

const std::string &IfcPolygonalBoundedHalfSpace::type() const {
    return IfcPolygonalBoundedHalfSpace::s_type.getName();
}

const Step::ClassType &IfcPolygonalBoundedHalfSpace::getClassType() {
    return IfcPolygonalBoundedHalfSpace::s_type;
}

const Step::ClassType &IfcPolygonalBoundedHalfSpace::getType() const {
    return IfcPolygonalBoundedHalfSpace::s_type;
}

bool IfcPolygonalBoundedHalfSpace::isOfType(const Step::ClassType &t) const {
    return IfcPolygonalBoundedHalfSpace::s_type == t ? true : IfcHalfSpaceSolid::isOfType(t);
}

IfcAxis2Placement3D *IfcPolygonalBoundedHalfSpace::getPosition() {
    if (Step::BaseObject::inited()) {
        return m_position.get();
    }
    else {
        return NULL;
    }
}

const IfcAxis2Placement3D *IfcPolygonalBoundedHalfSpace::getPosition() const {
    IfcPolygonalBoundedHalfSpace * deConstObject = const_cast< IfcPolygonalBoundedHalfSpace * > (this);
    return deConstObject->getPosition();
}

void IfcPolygonalBoundedHalfSpace::setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value) {
    m_position = value;
}

void IfcPolygonalBoundedHalfSpace::unsetPosition() {
    m_position = Step::getUnset(getPosition());
}

bool IfcPolygonalBoundedHalfSpace::testPosition() const {
    return !Step::isUnset(getPosition());
}

IfcBoundedCurve *IfcPolygonalBoundedHalfSpace::getPolygonalBoundary() {
    if (Step::BaseObject::inited()) {
        return m_polygonalBoundary.get();
    }
    else {
        return NULL;
    }
}

const IfcBoundedCurve *IfcPolygonalBoundedHalfSpace::getPolygonalBoundary() const {
    IfcPolygonalBoundedHalfSpace * deConstObject = const_cast< IfcPolygonalBoundedHalfSpace * > (this);
    return deConstObject->getPolygonalBoundary();
}

void IfcPolygonalBoundedHalfSpace::setPolygonalBoundary(const Step::RefPtr< IfcBoundedCurve > &value) {
    m_polygonalBoundary = value;
}

void IfcPolygonalBoundedHalfSpace::unsetPolygonalBoundary() {
    m_polygonalBoundary = Step::getUnset(getPolygonalBoundary());
}

bool IfcPolygonalBoundedHalfSpace::testPolygonalBoundary() const {
    return !Step::isUnset(getPolygonalBoundary());
}

bool IfcPolygonalBoundedHalfSpace::init() {
    bool status = IfcHalfSpaceSolid::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_position = NULL;
    }
    else {
        m_position = static_cast< IfcAxis2Placement3D * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_polygonalBoundary = NULL;
    }
    else {
        m_polygonalBoundary = static_cast< IfcBoundedCurve * > (m_expressDataSet->get(Step::getIdParam(arg)));
    }
    return true;
}

void IfcPolygonalBoundedHalfSpace::copy(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop) {
    IfcHalfSpaceSolid::copy(obj, copyop);
    setPosition((IfcAxis2Placement3D*)copyop(obj.m_position.get()));
    setPolygonalBoundary((IfcBoundedCurve*)copyop(obj.m_polygonalBoundary.get()));
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcPolygonalBoundedHalfSpace::s_type("IfcPolygonalBoundedHalfSpace");
