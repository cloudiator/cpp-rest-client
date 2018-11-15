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
 * OperatingSystem.h
 *
 * Represents the operating system of an image 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_OperatingSystem_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_OperatingSystem_H_


#include "../ModelBase.h"

#include "OperatingSystemFamily.h"
#include "OperatingSystemArchitecture.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Represents the operating system of an image 
/// </summary>
class  OperatingSystem
    : public ModelBase
{
public:
    OperatingSystem();
    virtual ~OperatingSystem();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// OperatingSystem members

    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OperatingSystemFamily> getOperatingSystemFamily() const;
    bool operatingSystemFamilyIsSet() const;
    void unsetOperatingSystemFamily();
    void setOperatingSystemFamily(std::shared_ptr<OperatingSystemFamily> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OperatingSystemArchitecture> getOperatingSystemArchitecture() const;
    bool operatingSystemArchitectureIsSet() const;
    void unsetOperatingSystemArchitecture();
    void setOperatingSystemArchitecture(std::shared_ptr<OperatingSystemArchitecture> value);
    /// <summary>
    /// Version of the OS
    /// </summary>
    utility::string_t getOperatingSystemVersion() const;
    bool operatingSystemVersionIsSet() const;
    void unsetOperatingSystemVersion();
    void setOperatingSystemVersion(utility::string_t value);

protected:
    std::shared_ptr<OperatingSystemFamily> m_OperatingSystemFamily;
    bool m_OperatingSystemFamilyIsSet;
    std::shared_ptr<OperatingSystemArchitecture> m_OperatingSystemArchitecture;
    bool m_OperatingSystemArchitectureIsSet;
    utility::string_t m_OperatingSystemVersion;
    bool m_OperatingSystemVersionIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_OperatingSystem_H_ */
