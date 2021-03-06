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
 * PlatformService.h
 *
 * Repesents additional PaaS services to component, e.g. a database, TODO! 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_PlatformService_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_PlatformService_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Repesents additional PaaS services to component, e.g. a database, TODO! 
/// </summary>
class  PlatformService
    : public ModelBase
{
public:
    PlatformService();
    virtual ~PlatformService();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PlatformService members

    /// <summary>
    /// Unique identifier
    /// </summary>
    utility::string_t getId() const;
        void setId(utility::string_t value);
    /// <summary>
    /// Human-readable name
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);

protected:
    utility::string_t m_Id;
        utility::string_t m_Name;
    };

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_PlatformService_H_ */
