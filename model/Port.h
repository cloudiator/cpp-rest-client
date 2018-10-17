/**
 * Cloudiator REST Api
 * No description provided (generated by Swagger Codegen https://github.com/swagger-api/swagger-codegen)
 *
 * OpenAPI spec version: 0.2.0
 * Contact: daniel.baur@uni-ulm.de
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */

/*
 * Port.h
 *
 * polymorphic superclass, only subtypes are allowed. Represents a communication port of a task 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Port_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Port_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// polymorphic superclass, only subtypes are allowed. Represents a communication port of a task 
/// </summary>
class  Port
    : public ModelBase
{
public:
    Port();
    virtual ~Port();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Port members

    /// <summary>
    /// Discriminator for polymorphism. Only subtypes are allowed. 
    /// </summary>
    utility::string_t getType() const;
        void setType(utility::string_t value);
    /// <summary>
    /// Uniquely identifies a port. Defines the name of the environment variables holding IP addresses of remote tasks. 
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);

protected:
    utility::string_t m_Type;
        utility::string_t m_Name;
    };

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Port_H_ */
