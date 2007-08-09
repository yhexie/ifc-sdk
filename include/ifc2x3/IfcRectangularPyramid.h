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

#ifndef IFC2X3_IFCRECTANGULARPYRAMID_H
#define IFC2X3_IFCRECTANGULARPYRAMID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseVisitor.h>
#include <Step/InstantiatableEntity.h>
#include <Step/SPFData.h>
#include <Step/ClassType.h>
#include <ifc2x3/IfcCsgPrimitive3D.h>
#include <Step/BaseObject.h>
#include <Step/BaseFactory.h>

namespace ifc2x3 {

  class IfcRectangularPyramid_Factory;

  /**
   */
  class IFC2X3_DLL_DEF IfcRectangularPyramid : public Step::InstantiatableEntity, public IfcCsgPrimitive3D {
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
     * (non-const) Returns the value of the explicit attribute 'XLength'.
     * 
     * @return the value of the explicit attribute 'XLength'
     */
    IfcPositiveLengthMeasure getXLength();
    /**
     * Sets the value of the explicit attribute 'XLength'.
     * 
     * @param value
     */
    void setXLength(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'YLength'.
     * 
     * @return the value of the explicit attribute 'YLength'
     */
    IfcPositiveLengthMeasure getYLength();
    /**
     * Sets the value of the explicit attribute 'YLength'.
     * 
     * @param value
     */
    void setYLength(IfcPositiveLengthMeasure value);
    /**
     * (non-const) Returns the value of the explicit attribute 'Height'.
     * 
     * @return the value of the explicit attribute 'Height'
     */
    IfcPositiveLengthMeasure getHeight();
    /**
     * Sets the value of the explicit attribute 'Height'.
     * 
     * @param value
     */
    void setHeight(IfcPositiveLengthMeasure value);
    /**
     */
    virtual void release();
    /**
     */
    virtual bool init();
    friend class IfcRectangularPyramid_Factory;

  protected:
    /**
     * @param args
     */
    IfcRectangularPyramid(Step::SPFData *args);
    virtual ~IfcRectangularPyramid();

  private:
    static Step::ClassType s_type;
    Real m_xLength;
    Real m_yLength;
    Real m_height;
    /**
     * @param c
     */
    IfcRectangularPyramid(const IfcRectangularPyramid &c);

  };

  class IfcRectangularPyramid;

  /**
   */
  class IFC2X3_DLL_DEF IfcRectangularPyramid_Factory : public Step::BaseFactory {
  public:
    /**
     */
    explicit IfcRectangularPyramid_Factory();
    virtual ~IfcRectangularPyramid_Factory();
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
    IfcRectangularPyramid *get(Step::StepId id);
    /**
     */
    IfcRectangularPyramid *generate();
    /**
     * @param id
     */
    IfcRectangularPyramid *find(Step::StepId id);

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

#endif // IFC2X3_IFCRECTANGULARPYRAMID_H
