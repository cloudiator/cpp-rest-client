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
 * Communication.h
 *
 * Part of a job Represents a communication requirement between two tasks by mapping a required port of a task to a provided port of another task. 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Communication_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Communication_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Part of a job Represents a communication requirement between two tasks by mapping a required port of a task to a provided port of another task. 
/// </summary>
class  Communication
    : public ModelBase
{
public:
    Communication();
    virtual ~Communication();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Communication members

    /// <summary>
    /// The name of the required port this communication refers to. 
    /// </summary>
    utility::string_t getPortRequired() const;
    bool portRequiredIsSet() const;
    void unsetPortRequired();
    void setPortRequired(utility::string_t value);
    /// <summary>
    /// The name of the provided port this communication refers to. 
    /// </summary>
    utility::string_t getPortProvided() const;
    bool portProvidedIsSet() const;
    void unsetPortProvided();
    void setPortProvided(utility::string_t value);

protected:
    utility::string_t m_PortRequired;
    bool m_PortRequiredIsSet;
    utility::string_t m_PortProvided;
    bool m_PortProvidedIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Communication_H_ */
