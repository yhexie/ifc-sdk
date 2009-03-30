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

#include "ifc2x3/IfcIrregularTimeSeries.h"

#include "ifc2x3/CopyOp.h"
#include "ifc2x3/IfcIrregularTimeSeriesValue.h"
#include "ifc2x3/IfcTimeSeries.h"
#include "ifc2x3/Visitor.h"
#include <Step/BaseExpressDataSet.h>
#include <Step/BaseObject.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFFunctions.h>
#include <Step/logger.h>
#include <string>

using namespace ifc2x3;

IfcIrregularTimeSeries::IfcIrregularTimeSeries(Step::Id id, Step::SPFData *args) : IfcTimeSeries(id, args) {
}

IfcIrregularTimeSeries::~IfcIrregularTimeSeries() {
}

bool IfcIrregularTimeSeries::acceptVisitor(Step::BaseVisitor *visitor) {
    return static_cast< Visitor * > (visitor)->visitIfcIrregularTimeSeries(this);
}

const std::string &IfcIrregularTimeSeries::type() const {
    return IfcIrregularTimeSeries::s_type.getName();
}

const Step::ClassType &IfcIrregularTimeSeries::getClassType() {
    return IfcIrregularTimeSeries::s_type;
}

const Step::ClassType &IfcIrregularTimeSeries::getType() const {
    return IfcIrregularTimeSeries::s_type;
}

bool IfcIrregularTimeSeries::isOfType(const Step::ClassType &t) const {
    return IfcIrregularTimeSeries::s_type == t ? true : IfcTimeSeries::isOfType(t);
}

List_IfcIrregularTimeSeriesValue_1_n &IfcIrregularTimeSeries::getValues() {
    if (Step::BaseObject::inited()) {
        return m_values;
    }
    else {
        m_values.setUnset(true);
        return m_values;
    }
}

const List_IfcIrregularTimeSeriesValue_1_n &IfcIrregularTimeSeries::getValues() const {
    IfcIrregularTimeSeries * deConstObject = const_cast< IfcIrregularTimeSeries * > (this);
    return deConstObject->getValues();
}

void IfcIrregularTimeSeries::setValues(const List_IfcIrregularTimeSeriesValue_1_n &value) {
    m_values = value;
}

void IfcIrregularTimeSeries::unsetValues() {
    m_values.clear();
    m_values.setUnset(true);
}

bool IfcIrregularTimeSeries::testValues() const {
    return !Step::isUnset(getValues());
}

bool IfcIrregularTimeSeries::init() {
    bool status = IfcTimeSeries::init();
    std::string arg;
    if (!status) {
        return false;
    }
    arg = m_args->getNext();
    if (arg == "$" || arg == "*") {
        m_values.setUnset(true);
    }
    else {
        m_values.setUnset(false);
        while (true) {
            std::string str1;
            Step::getSubParameter(arg, str1);
            if (str1 != "") {
                Step::RefPtr< IfcIrregularTimeSeriesValue > attr2;
                attr2 = static_cast< IfcIrregularTimeSeriesValue * > (m_expressDataSet->get(Step::getIdParam(str1)));
                m_values.push_back(attr2);
            }
            else {
                break;
            }
        }
    }
    return true;
}

void IfcIrregularTimeSeries::copy(const IfcIrregularTimeSeries &obj, const CopyOp &copyop) {
    Step::List< Step::RefPtr< IfcIrregularTimeSeriesValue >, 1 >::const_iterator it_m_values;
    IfcTimeSeries::copy(obj, copyop);
    for (it_m_values = obj.m_values.begin(); it_m_values != obj.m_values.end(); ++it_m_values) {
        Step::RefPtr< IfcIrregularTimeSeriesValue > copyTarget = (IfcIrregularTimeSeriesValue *) (copyop((*it_m_values).get()));
        m_values.push_back(copyTarget.get());
    }
    return;
}

IFC2X3_DLL_DEF Step::ClassType IfcIrregularTimeSeries::s_type("IfcIrregularTimeSeries");
