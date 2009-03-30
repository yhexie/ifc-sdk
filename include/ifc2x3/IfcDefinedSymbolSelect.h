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

#ifndef IFC2X3_IFCDEFINEDSYMBOLSELECT_H
#define IFC2X3_IFCDEFINEDSYMBOLSELECT_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseObject.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;
    class IfcExternallyDefinedSymbol;
    class IfcPreDefinedSymbol;

    /**
     * .
     * 
     */
    class IFC2X3_DLL_DEF IfcDefinedSymbolSelect : public Step::BaseObject {
    public:
        /**
 */
enum IfcDefinedSymbolSelect_select {
            IFCPREDEFINEDSYMBOL,
            IFCEXTERNALLYDEFINEDSYMBOL,
            UNSET,
        };

        union IfcDefinedSymbolSelect_union {
            IfcPreDefinedSymbol *m_IfcPreDefinedSymbol;
            IfcExternallyDefinedSymbol *m_IfcExternallyDefinedSymbol;
        };
        /**
         */
        IfcDefinedSymbolSelect();
        virtual ~IfcDefinedSymbolSelect();
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
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcDefinedSymbolSelect &obj, const CopyOp &copyop);
        /**
         */
        std::string currentTypeName() const;
        /**
         */
        IfcDefinedSymbolSelect_select currentType() const;
        /**
         */
        void deleteUnion();
        /**
         */
        IfcPreDefinedSymbol *getIfcPreDefinedSymbol() const;
        /**
         * @param value
         */
        void setIfcPreDefinedSymbol(IfcPreDefinedSymbol *value);
        /**
         */
        IfcExternallyDefinedSymbol *getIfcExternallyDefinedSymbol() const;
        /**
         * @param value
         */
        void setIfcExternallyDefinedSymbol(IfcExternallyDefinedSymbol *value);
        /**
         * @param v
         */
        void set(Step::BaseObject *v);

    protected:
        /**
         * @param args
         */
        IfcDefinedSymbolSelect(Step::SPFData *args);
        /**
         */
        virtual bool init();

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcDefinedSymbolSelect_select m_type;
        /**
         */
        IfcDefinedSymbolSelect_union m_IfcDefinedSymbolSelect_union;

    };

}

#endif // IFC2X3_IFCDEFINEDSYMBOLSELECT_H
