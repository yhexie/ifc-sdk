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

#ifndef IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
#define IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcRepresentationContext.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcAxis2Placement;
    class IfcDirection;

    /**
     * Generated class for the IfcGeometricRepresentationContext Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcGeometricRepresentationContext : public IfcRepresentationContext {
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
         * Gets the value of the explicit attribute 'CoordinateSpaceDimension'.
         * 
         */
        virtual IfcDimensionCount getCoordinateSpaceDimension();
        /**
         * (const) Returns the value of the explicit attribute 'CoordinateSpaceDimension'.
         * 
         * @return the value of the explicit attribute 'CoordinateSpaceDimension'
         */
        virtual const IfcDimensionCount getCoordinateSpaceDimension() const;
        /**
         * Sets the value of the explicit attribute 'CoordinateSpaceDimension'.
         * 
         * @param value
         */
        virtual void setCoordinateSpaceDimension(IfcDimensionCount value);
        /**
         * unset the attribute 'CoordinateSpaceDimension'.
         * 
         */
        virtual void unsetCoordinateSpaceDimension();
        /**
         * Test if the attribute 'CoordinateSpaceDimension' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testCoordinateSpaceDimension() const;
        /**
         * Gets the value of the explicit attribute 'Precision'.
         * 
         */
        virtual Step::Real getPrecision();
        /**
         * (const) Returns the value of the explicit attribute 'Precision'.
         * 
         * @return the value of the explicit attribute 'Precision'
         */
        virtual const Step::Real getPrecision() const;
        /**
         * Sets the value of the explicit attribute 'Precision'.
         * 
         * @param value
         */
        virtual void setPrecision(Step::Real value);
        /**
         * unset the attribute 'Precision'.
         * 
         */
        virtual void unsetPrecision();
        /**
         * Test if the attribute 'Precision' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPrecision() const;
        /**
         * Gets the value of the explicit attribute 'WorldCoordinateSystem'.
         * 
         */
        virtual IfcAxis2Placement *getWorldCoordinateSystem();
        /**
         * (const) Returns the value of the explicit attribute 'WorldCoordinateSystem'.
         * 
         * @return the value of the explicit attribute 'WorldCoordinateSystem'
         */
        virtual const IfcAxis2Placement *getWorldCoordinateSystem() const;
        /**
         * Sets the value of the explicit attribute 'WorldCoordinateSystem'.
         * 
         * @param value
         */
        virtual void setWorldCoordinateSystem(const Step::RefPtr< IfcAxis2Placement > &value);
        /**
         * unset the attribute 'WorldCoordinateSystem'.
         * 
         */
        virtual void unsetWorldCoordinateSystem();
        /**
         * Test if the attribute 'WorldCoordinateSystem' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testWorldCoordinateSystem() const;
        /**
         * Gets the value of the explicit attribute 'TrueNorth'.
         * 
         */
        virtual IfcDirection *getTrueNorth();
        /**
         * (const) Returns the value of the explicit attribute 'TrueNorth'.
         * 
         * @return the value of the explicit attribute 'TrueNorth'
         */
        virtual const IfcDirection *getTrueNorth() const;
        /**
         * Sets the value of the explicit attribute 'TrueNorth'.
         * 
         * @param value
         */
        virtual void setTrueNorth(const Step::RefPtr< IfcDirection > &value);
        /**
         * unset the attribute 'TrueNorth'.
         * 
         */
        virtual void unsetTrueNorth();
        /**
         * Test if the attribute 'TrueNorth' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTrueNorth() const;
        /**
         * Gets the value of the inverse attribute 'HasSubContexts'.
         * 
         */
        Inverse_Set_IfcGeometricRepresentationSubContext_0_n &getHasSubContexts();
        /**
         * (const) Returns the value of the explicit attribute 'HasSubContexts'.
         * 
         * @return the value of the explicit attribute 'HasSubContexts'
         */
        virtual const Inverse_Set_IfcGeometricRepresentationSubContext_0_n &getHasSubContexts() const;
        /**
         * Test if the attribute 'HasSubContexts' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testHasSubContexts() const;
        friend class IfcGeometricRepresentationSubContext;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcGeometricRepresentationContext(Step::Id id, Step::SPFData *args);
        virtual ~IfcGeometricRepresentationContext();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcGeometricRepresentationContext &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Integer m_coordinateSpaceDimension;
        /**
         */
        Step::Real m_precision;
        /**
         */
        Step::RefPtr< IfcAxis2Placement > m_worldCoordinateSystem;
        /**
         */
        Step::RefPtr< IfcDirection > m_trueNorth;
        /**
         */
        Inverse_Set_IfcGeometricRepresentationSubContext_0_n m_hasSubContexts;

    };

}

#endif // IFC2X3_IFCGEOMETRICREPRESENTATIONCONTEXT_H
