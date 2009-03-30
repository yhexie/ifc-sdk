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

#ifndef IFC2X3_IFCCSGSOLID_H
#define IFC2X3_IFCCSGSOLID_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include "ifc2x3/IfcSolidModel.h"
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/Referenced.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcCsgSelect;

    /**
     * Generated class for the IfcCsgSolid Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcCsgSolid : public IfcSolidModel {
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
         * Gets the value of the explicit attribute 'TreeRootExpression'.
         * 
         */
        virtual IfcCsgSelect *getTreeRootExpression();
        /**
         * (const) Returns the value of the explicit attribute 'TreeRootExpression'.
         * 
         * @return the value of the explicit attribute 'TreeRootExpression'
         */
        virtual const IfcCsgSelect *getTreeRootExpression() const;
        /**
         * Sets the value of the explicit attribute 'TreeRootExpression'.
         * 
         * @param value
         */
        virtual void setTreeRootExpression(const Step::RefPtr< IfcCsgSelect > &value);
        /**
         * unset the attribute 'TreeRootExpression'.
         * 
         */
        virtual void unsetTreeRootExpression();
        /**
         * Test if the attribute 'TreeRootExpression' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testTreeRootExpression() const;
        friend class ExpressDataSet;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcCsgSolid(Step::Id id, Step::SPFData *args);
        virtual ~IfcCsgSolid();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcCsgSolid &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        Step::RefPtr< IfcCsgSelect > m_treeRootExpression;

    };

}

#endif // IFC2X3_IFCCSGSOLID_H
