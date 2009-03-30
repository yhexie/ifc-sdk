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

#ifndef IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
#define IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcStructuralConnectionCondition.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcSlippageConnectionCondition Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcSlippageConnectionCondition : public IfcStructuralConnectionCondition {
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
         * Gets the value of the explicit attribute 'SlippageX'.
         * 
         */
        virtual IfcLengthMeasure getSlippageX();
        /**
         * (const) Returns the value of the explicit attribute 'SlippageX'.
         * 
         * @return the value of the explicit attribute 'SlippageX'
         */
        virtual const IfcLengthMeasure getSlippageX() const;
        /**
         * Sets the value of the explicit attribute 'SlippageX'.
         * 
         * @param value
         */
        virtual void setSlippageX(IfcLengthMeasure value);
        /**
         * unset the attribute 'SlippageX'.
         * 
         */
        virtual void unsetSlippageX();
        /**
         * Test if the attribute 'SlippageX' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSlippageX() const;
        /**
         * Gets the value of the explicit attribute 'SlippageY'.
         * 
         */
        virtual IfcLengthMeasure getSlippageY();
        /**
         * (const) Returns the value of the explicit attribute 'SlippageY'.
         * 
         * @return the value of the explicit attribute 'SlippageY'
         */
        virtual const IfcLengthMeasure getSlippageY() const;
        /**
         * Sets the value of the explicit attribute 'SlippageY'.
         * 
         * @param value
         */
        virtual void setSlippageY(IfcLengthMeasure value);
        /**
         * unset the attribute 'SlippageY'.
         * 
         */
        virtual void unsetSlippageY();
        /**
         * Test if the attribute 'SlippageY' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSlippageY() const;
        /**
         * Gets the value of the explicit attribute 'SlippageZ'.
         * 
         */
        virtual IfcLengthMeasure getSlippageZ();
        /**
         * (const) Returns the value of the explicit attribute 'SlippageZ'.
         * 
         * @return the value of the explicit attribute 'SlippageZ'
         */
        virtual const IfcLengthMeasure getSlippageZ() const;
        /**
         * Sets the value of the explicit attribute 'SlippageZ'.
         * 
         * @param value
         */
        virtual void setSlippageZ(IfcLengthMeasure value);
        /**
         * unset the attribute 'SlippageZ'.
         * 
         */
        virtual void unsetSlippageZ();
        /**
         * Test if the attribute 'SlippageZ' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testSlippageZ() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcSlippageConnectionCondition(Step::Id id, Step::SPFData *args);
        virtual ~IfcSlippageConnectionCondition();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcSlippageConnectionCondition &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::Real m_slippageX;
        /**
         */
        Step::Real m_slippageY;
        /**
         */
        Step::Real m_slippageZ;

    };

}

#endif // IFC2X3_IFCSLIPPAGECONNECTIONCONDITION_H
