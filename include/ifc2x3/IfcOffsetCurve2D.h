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

#ifndef IFC2X3_IFCOFFSETCURVE2D_H
#define IFC2X3_IFCOFFSETCURVE2D_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/Referenced.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcCurve.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcOffsetCurve2D_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcOffsetCurve2D : public Step::InstantiatableEntity, public IfcCurve {
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
     * (non-const) Returns the value of the explicit attribute 'BasisCurve'.
     * 
     * @return the value of the explicit attribute 'BasisCurve'
     */
    IfcCurve *getBasisCurve();
    /**
     * Sets the value of the explicit attribute 'BasisCurve'.
     * 
     * @param value
     */
    void setBasisCurve(const Step::RefPtr< IfcCurve > &value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Distance'.
     * 
     * @return the value of the explicit attribute 'Distance'
     */
    IfcLengthMeasure getDistance();
    /**
     * Sets the value of the explicit attribute 'Distance'.
     * 
     * @param value
     */
    void setDistance(IfcLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'SelfIntersect'.
     * 
     * @return the value of the explicit attribute 'SelfIntersect'
     */
    Logical getSelfIntersect();
    /**
     * Sets the value of the explicit attribute 'SelfIntersect'.
     * 
     * @param value
     */
    void setSelfIntersect(Logical value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcOffsetCurve2D_Factory;

  protected:
    /**
     * @param args
     */
    IfcOffsetCurve2D(Step::SPFData *args);
    virtual ~IfcOffsetCurve2D();

  private:
    static Step::ClassType s_type;
    Step::RefPtr< IfcCurve > m_basisCurve;
    Real m_distance;
    Logical m_selfIntersect;
    /**
     * @param c
     */
    IfcOffsetCurve2D(const IfcOffsetCurve2D &c);

  };

  class IfcOffsetCurve2D;

  /**
   */
  class IFC2X3_DLL_DEF IfcOffsetCurve2D_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcOffsetCurve2D_Factory();
    virtual ~IfcOffsetCurve2D_Factory();
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
    IfcOffsetCurve2D *get(Step::StepId id);
    /**
     */
    IfcOffsetCurve2D *generate();
    /**
     * @param id
     */
    IfcOffsetCurve2D *find(Step::StepId id);

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

#endif // IFC2X3_IFCOFFSETCURVE2D_H
