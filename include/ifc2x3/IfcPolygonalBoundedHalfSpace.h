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

#ifndef IFC2X3_IFCPOLYGONALBOUNDEDHALFSPACE_H
#define IFC2X3_IFCPOLYGONALBOUNDEDHALFSPACE_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcHalfSpaceSolid.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement3D;
    class IfcBoundedCurve;

    /**
     * Generated class for the IfcPolygonalBoundedHalfSpace Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcPolygonalBoundedHalfSpace : public IfcHalfSpaceSolid {
    public:
        /**
         * Accepts a read/write Step::BaseVisitor.
         * 
         * @param visitor the read/write Step::BaseVisitor to accept
         */
        virtual bool acceptVisitor(Step::BaseVisitor *visitor);
        /**
         * Returns the class type as a human readable std::string.
         * 
         */
        virtual const std::string &type() const;
        /**
         * Returns the Step::ClassType of this specific class. Useful to compare with the isOfType method for example.
         * 
         */
        static const Step::ClassType &getClassType();
        /**
         * Returns the Step::ClassType of the instance of this class. (might be a subtype since it is virtual and overloaded).
         * 
         */
        virtual const Step::ClassType &getType() const;
        /**
         * Compares this instance's Step::ClassType with the one passed as parameter. Checks the type recursively (to the mother classes).
         * 
         * @param t
         */
        virtual bool isOfType(const Step::ClassType &t) const;
        /**
         * Gets the value of the explicit attribute 'Position'.
         * 
         */
        virtual IfcAxis2Placement3D *getPosition();
        /**
         * (const) Returns the value of the explicit attribute 'Position'.
         * 
         * @return the value of the explicit attribute 'Position'
         */
        virtual const IfcAxis2Placement3D *getPosition() const;
        /**
         * Sets the value of the explicit attribute 'Position'.
         * 
         * @param value
         */
        virtual void setPosition(const Step::RefPtr< IfcAxis2Placement3D > &value);
        /**
         * unset the attribute 'Position'.
         * 
         */
        virtual void unsetPosition();
        /**
         * Test if the attribute 'Position' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPosition() const;
        /**
         * Gets the value of the explicit attribute 'PolygonalBoundary'.
         * 
         */
        virtual IfcBoundedCurve *getPolygonalBoundary();
        /**
         * (const) Returns the value of the explicit attribute 'PolygonalBoundary'.
         * 
         * @return the value of the explicit attribute 'PolygonalBoundary'
         */
        virtual const IfcBoundedCurve *getPolygonalBoundary() const;
        /**
         * Sets the value of the explicit attribute 'PolygonalBoundary'.
         * 
         * @param value
         */
        virtual void setPolygonalBoundary(const Step::RefPtr< IfcBoundedCurve > &value);
        /**
         * unset the attribute 'PolygonalBoundary'.
         * 
         */
        virtual void unsetPolygonalBoundary();
        /**
         * Test if the attribute 'PolygonalBoundary' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPolygonalBoundary() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcPolygonalBoundedHalfSpace(Step::Id id, Step::SPFData *args);
        virtual ~IfcPolygonalBoundedHalfSpace();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcPolygonalBoundedHalfSpace &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcAxis2Placement3D > m_position;
        /**
         */
        Step::RefPtr< IfcBoundedCurve > m_polygonalBoundary;

    };

}

#endif // IFC2X3_IFCPOLYGONALBOUNDEDHALFSPACE_H
