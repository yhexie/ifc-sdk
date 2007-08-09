/*
// ////////////////////////////////////////////
// This File has been generated automaticaly //
// by Expressik modified generator           //
//  Powered by : Eve CSTB                    //
// ////////////////////////////////////////////

 * *************************************************************************
 *                                                                         *
 *     STEP Early Classes C++                                              *
 *                                                                         *
 *     Copyright (C) 2005 CSTB                                             *
 *                                                                         *
 *   This library is free software; you can redistribute it and/or         *
 *   modify it under the terms of the GNU Lesser General Public            *
 *   License as published by the Free Software Foundation; either          *
 *   version 2.1 of the License, or (at your option) any later version.    *
 *                                                                         *
 *   This library is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU     *
 *   Lesser General Public License for more details.                       *
 *                                                                         *
 *   You should have received a copy of the GNU Lesser General Public      *
 *   License along with this library; if not, write to the                 *
 *         Free Software Foundation, Inc.                                  *
 *         59 Temple Place, Suite 330                                      *
 *         Boston, MA  02111-1307                                          *
 *         USA                                                             *
 *                                                                         *
 *   For further information please contact                                *
 *                                                                         *
 *         eve@cstb.fr                                                     *
 *   or                                                                    *
 *         Eve, CSTB                                                       *
 *         290, route des Lucioles                                         *
 *         BP 209                                                          *
 *         06904 Sophia Antipolis, France                                  *
 *                                                                         *
 ***************************************************************************
*/

#ifndef IFC2X3_IFCGENERALPROFILEPROPERTIES_H
#define IFC2X3_IFCGENERALPROFILEPROPERTIES_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <ifc2x3/IfcProfileProperties.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcGeneralProfileProperties_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcGeneralProfileProperties : public Step::InstantiatableEntity, public IfcProfileProperties {
  public:
    /**
     * Accepts a read/write DatatypeVisitor.
     * 
     * @param v the read/write DatatypeVisitor to accept
     */
    virtual bool acceptVisitor(Step::BaseVisitor *v);
    /**
     */
    virtual const char *type();
    /**
     */
    static Step::ClassType getClassType();
    /**
     */
    virtual Step::ClassType getType() const;
    /**
     * @param t
     */
    virtual bool isOfType(Step::ClassType t);
    /**
     * (non-const) Returns the value of the explicit attribute 'PhysicalWeight'.
     * 
     * @return the value of the explicit attribute 'PhysicalWeight'
     */
    IfcMassPerLengthMeasure getPhysicalWeight();
    /**
     * Sets the value of the explicit attribute 'PhysicalWeight'.
     * 
     * @param value
     */
    void setPhysicalWeight(IfcMassPerLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Perimeter'.
     * 
     * @return the value of the explicit attribute 'Perimeter'
     */
    IfcPositiveLengthMeasure getPerimeter();
    /**
     * Sets the value of the explicit attribute 'Perimeter'.
     * 
     * @param value
     */
    void setPerimeter(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MinimumPlateThickness'.
     * 
     * @return the value of the explicit attribute 'MinimumPlateThickness'
     */
    IfcPositiveLengthMeasure getMinimumPlateThickness();
    /**
     * Sets the value of the explicit attribute 'MinimumPlateThickness'.
     * 
     * @param value
     */
    void setMinimumPlateThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'MaximumPlateThickness'.
     * 
     * @return the value of the explicit attribute 'MaximumPlateThickness'
     */
    IfcPositiveLengthMeasure getMaximumPlateThickness();
    /**
     * Sets the value of the explicit attribute 'MaximumPlateThickness'.
     * 
     * @param value
     */
    void setMaximumPlateThickness(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'CrossSectionArea'.
     * 
     * @return the value of the explicit attribute 'CrossSectionArea'
     */
    IfcAreaMeasure getCrossSectionArea();
    /**
     * Sets the value of the explicit attribute 'CrossSectionArea'.
     * 
     * @param value
     */
    void setCrossSectionArea(IfcAreaMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcGeneralProfileProperties_Factory;

  protected:
    /**
     * @param args
     */
    IfcGeneralProfileProperties(Step::SPFData *args);
    virtual ~IfcGeneralProfileProperties();

  private:
    static Step::ClassType s_type;
    Real m_physicalWeight;
    Real m_perimeter;
    Real m_minimumPlateThickness;
    Real m_maximumPlateThickness;
    Real m_crossSectionArea;
    /**
     * @param c
     */
    IfcGeneralProfileProperties(const IfcGeneralProfileProperties &c);

  };

  class IfcGeneralProfileProperties;

  /**
   */
  class IFC2X3_DLL_DEF IfcGeneralProfileProperties_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcGeneralProfileProperties_Factory();
    virtual ~IfcGeneralProfileProperties_Factory();
    /**
     * @param b
     */
    void clear(bool b);
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator begin();
    /**
     */
    std::map<Step::StepId,Step::BaseObject*>::iterator end();
    /**
     * @param id
     */
    IfcGeneralProfileProperties *get(Step::StepId id);
    /**
     */
    IfcGeneralProfileProperties *generate();
    /**
     * @param id
     */
    IfcGeneralProfileProperties *find(Step::StepId id);

  protected:
    /**
     * @param id
     */
    virtual Step::BaseObject *create(Step::StepId id);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(STEP_MAP<Step::StepId, Step::BaseObjectPtr >::iterator it);
    /**
     * @param it
     */
    virtual Step::BaseObject *create(std::map<Step::StepId, Step::BaseObject*>::iterator it);

  };

}

#endif // IFC2X3_IFCGENERALPROFILEPROPERTIES_H
