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

#ifndef IFC2X3_IFCLIGHTDISTRIBUTIONDATA_H
#define IFC2X3_IFCLIGHTDISTRIBUTIONDATA_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcLightDistributionData Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcLightDistributionData : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'MainPlaneAngle'.
         * 
         */
        virtual IfcPlaneAngleMeasure getMainPlaneAngle();
        /**
         * (const) Returns the value of the explicit attribute 'MainPlaneAngle'.
         * 
         * @return the value of the explicit attribute 'MainPlaneAngle'
         */
        virtual const IfcPlaneAngleMeasure getMainPlaneAngle() const;
        /**
         * Sets the value of the explicit attribute 'MainPlaneAngle'.
         * 
         * @param value
         */
        virtual void setMainPlaneAngle(IfcPlaneAngleMeasure value);
        /**
         * unset the attribute 'MainPlaneAngle'.
         * 
         */
        virtual void unsetMainPlaneAngle();
        /**
         * Test if the attribute 'MainPlaneAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testMainPlaneAngle() const;
        /**
         * Gets the value of the explicit attribute 'SecondaryPlaneAngle'.
         * 
         */
        virtual List_IfcPlaneAngleMeasure_1_n &getSecondaryPlaneAngle();
        /**
         * (const) Returns the value of the explicit attribute 'SecondaryPlaneAngle'.
         * 
         * @return the value of the explicit attribute 'SecondaryPlaneAngle'
         */
        virtual const List_IfcPlaneAngleMeasure_1_n &getSecondaryPlaneAngle() const;
        /**
         * Sets the value of the explicit attribute 'SecondaryPlaneAngle'.
         * 
         * @param value
         */
        virtual void setSecondaryPlaneAngle(const List_IfcPlaneAngleMeasure_1_n &value);
        /**
         * unset the attribute 'SecondaryPlaneAngle'.
         * 
         */
        virtual void unsetSecondaryPlaneAngle();
        /**
         * Test if the attribute 'SecondaryPlaneAngle' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSecondaryPlaneAngle() const;
        /**
         * Gets the value of the explicit attribute 'LuminousIntensity'.
         * 
         */
        virtual List_IfcLuminousIntensityDistributionMeasure_1_n &getLuminousIntensity();
        /**
         * (const) Returns the value of the explicit attribute 'LuminousIntensity'.
         * 
         * @return the value of the explicit attribute 'LuminousIntensity'
         */
        virtual const List_IfcLuminousIntensityDistributionMeasure_1_n &getLuminousIntensity() const;
        /**
         * Sets the value of the explicit attribute 'LuminousIntensity'.
         * 
         * @param value
         */
        virtual void setLuminousIntensity(const List_IfcLuminousIntensityDistributionMeasure_1_n &value);
        /**
         * unset the attribute 'LuminousIntensity'.
         * 
         */
        virtual void unsetLuminousIntensity();
        /**
         * Test if the attribute 'LuminousIntensity' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testLuminousIntensity() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcLightDistributionData(Step::Id id, Step::SPFData *args);
        virtual ~IfcLightDistributionData();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcLightDistributionData &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_mainPlaneAngle;
        /**
         */
        List_IfcPlaneAngleMeasure_1_n m_secondaryPlaneAngle;
        /**
         */
        List_IfcLuminousIntensityDistributionMeasure_1_n m_luminousIntensity;

    };

}

#endif // IFC2X3_IFCLIGHTDISTRIBUTIONDATA_H
