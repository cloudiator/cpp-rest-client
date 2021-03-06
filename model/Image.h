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
 * Image.h
 *
 * Represents an image offer by a cloud 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Image_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Image_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "OperatingSystem.h"
#include "Location.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Represents an image offer by a cloud 
/// </summary>
class  Image
    : public ModelBase
{
public:
    Image();
    virtual ~Image();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Image members

    /// <summary>
    /// Unique identifier for this image
    /// </summary>
    utility::string_t getId() const;
        void setId(utility::string_t value);
    /// <summary>
    /// Human-readable name
    /// </summary>
    utility::string_t getName() const;
        void setName(utility::string_t value);
    /// <summary>
    /// Original id issued by provider
    /// </summary>
    utility::string_t getProviderId() const;
        void setProviderId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<OperatingSystem> getOperatingSystem() const;
        void setOperatingSystem(std::shared_ptr<OperatingSystem> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Location> getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();
    void setLocation(std::shared_ptr<Location> value);

protected:
    utility::string_t m_Id;
        utility::string_t m_Name;
        utility::string_t m_ProviderId;
        std::shared_ptr<OperatingSystem> m_OperatingSystem;
        std::shared_ptr<Location> m_Location;
    bool m_LocationIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Image_H_ */
