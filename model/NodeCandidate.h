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
 * NodeCandidate.h
 *
 * A node creatable by the system
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_NodeCandidate_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_NodeCandidate_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "Hardware.h"
#include "Image.h"
#include "Location.h"
#include "Cloud.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// A node creatable by the system
/// </summary>
class  NodeCandidate
    : public ModelBase
{
public:
    NodeCandidate();
    virtual ~NodeCandidate();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// NodeCandidate members

    /// <summary>
    /// 
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    double getPrice() const;
    bool priceIsSet() const;
    void unsetPrice();
    void setPrice(double value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Cloud> getCloud() const;
    bool cloudIsSet() const;
    void unsetCloud();
    void setCloud(std::shared_ptr<Cloud> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Image> getImage() const;
    bool imageIsSet() const;
    void unsetImage();
    void setImage(std::shared_ptr<Image> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Hardware> getHardware() const;
    bool hardwareIsSet() const;
    void unsetHardware();
    void setHardware(std::shared_ptr<Hardware> value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<Location> getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();
    void setLocation(std::shared_ptr<Location> value);

protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    double m_Price;
    bool m_PriceIsSet;
    std::shared_ptr<Cloud> m_Cloud;
    bool m_CloudIsSet;
    std::shared_ptr<Image> m_Image;
    bool m_ImageIsSet;
    std::shared_ptr<Hardware> m_Hardware;
    bool m_HardwareIsSet;
    std::shared_ptr<Location> m_Location;
    bool m_LocationIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_NodeCandidate_H_ */
