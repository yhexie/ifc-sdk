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

#ifndef IFC2X3_IFCADDRESS_H
#define IFC2X3_IFCADDRESS_H
#include <ifc2x3/DefinedTypes.h>
#include <ifc2x3/ifc2x3DLL.h>

#include <Step/BaseEntity.h>
#include <Step/BaseVisitor.h>
#include <Step/ClassType.h>
#include <Step/SPFData.h>
#include <Step/String.h>
#include <string>

namespace ifc2x3 {

    class CopyOp;

    /**
     * Generated class for the IfcAddress Entity.
     * 
     */
    class IFC2X3_DLL_DEF IfcAddress : public Step::BaseEntity {
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
         * Gets the value of the explicit attribute 'Purpose'.
         * 
         */
        virtual IfcAddressTypeEnum getPurpose();
        /**
         * (const) Returns the value of the explicit attribute 'Purpose'.
         * 
         * @return the value of the explicit attribute 'Purpose'
         */
        virtual const IfcAddressTypeEnum getPurpose() const;
        /**
         * Sets the value of the explicit attribute 'Purpose'.
         * 
         * @param value
         */
        virtual void setPurpose(IfcAddressTypeEnum value);
        /**
         * unset the attribute 'Purpose'.
         * 
         */
        virtual void unsetPurpose();
        /**
         * Test if the attribute 'Purpose' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testPurpose() const;
        /**
         * Gets the value of the explicit attribute 'Description'.
         * 
         */
        virtual IfcText getDescription();
        /**
         * (const) Returns the value of the explicit attribute 'Description'.
         * 
         * @return the value of the explicit attribute 'Description'
         */
        virtual const IfcText getDescription() const;
        /**
         * Sets the value of the explicit attribute 'Description'.
         * 
         * @param value
         */
        virtual void setDescription(const IfcText &value);
        /**
         * unset the attribute 'Description'.
         * 
         */
        virtual void unsetDescription();
        /**
         * Test if the attribute 'Description' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testDescription() const;
        /**
         * Gets the value of the explicit attribute 'UserDefinedPurpose'.
         * 
         */
        virtual IfcLabel getUserDefinedPurpose();
        /**
         * (const) Returns the value of the explicit attribute 'UserDefinedPurpose'.
         * 
         * @return the value of the explicit attribute 'UserDefinedPurpose'
         */
        virtual const IfcLabel getUserDefinedPurpose() const;
        /**
         * Sets the value of the explicit attribute 'UserDefinedPurpose'.
         * 
         * @param value
         */
        virtual void setUserDefinedPurpose(const IfcLabel &value);
        /**
         * unset the attribute 'UserDefinedPurpose'.
         * 
         */
        virtual void unsetUserDefinedPurpose();
        /**
         * Test if the attribute 'UserDefinedPurpose' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testUserDefinedPurpose() const;
        /**
         * Gets the value of the inverse attribute 'OfPerson'.
         * 
         */
        Inverse_Set_IfcPerson_0_n &getOfPerson();
        /**
         * (const) Returns the value of the explicit attribute 'OfPerson'.
         * 
         * @return the value of the explicit attribute 'OfPerson'
         */
        virtual const Inverse_Set_IfcPerson_0_n &getOfPerson() const;
        /**
         * Test if the attribute 'OfPerson' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOfPerson() const;
        /**
         * Gets the value of the inverse attribute 'OfOrganization'.
         * 
         */
        Inverse_Set_IfcOrganization_0_n &getOfOrganization();
        /**
         * (const) Returns the value of the explicit attribute 'OfOrganization'.
         * 
         * @return the value of the explicit attribute 'OfOrganization'
         */
        virtual const Inverse_Set_IfcOrganization_0_n &getOfOrganization() const;
        /**
         * Test if the attribute 'OfOrganization' is set.
         * 
         * @return true if set, false if unset
         */
        virtual bool testOfOrganization() const;
        friend class IfcPerson;
        friend class ExpressDataSet;
        friend class Inverted_IfcPerson_Addresses_type;
        friend class Inverted_IfcOrganization_Addresses_type;
        friend class IfcOrganization;

    protected:
        /**
         * @param id
         * @param args
         */
        IfcAddress(Step::Id id, Step::SPFData *args);
        virtual ~IfcAddress();
        /**
         */
        virtual bool init();
        /**
         * @param obj
         * @param copyop
         */
        virtual void copy(const IfcAddress &obj, const CopyOp &copyop);

    private:
        /**
         */
        static Step::ClassType s_type;
        /**
         */
        IfcAddressTypeEnum m_purpose;
        /**
         */
        Step::String m_description;
        /**
         */
        Step::String m_userDefinedPurpose;
        /**
         */
        Inverse_Set_IfcPerson_0_n m_ofPerson;
        /**
         */
        Inverse_Set_IfcOrganization_0_n m_ofOrganization;

    };

}

#endif // IFC2X3_IFCADDRESS_H
