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
 * PushSensor.h
 *
 * 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_PushSensor_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_PushSensor_H_


#include "Sensor.h"
#include <cpprest/details/basic_types.h>

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// 
/// </summary>
class  PushSensor
    : public Sensor
{
public:
    PushSensor();
    virtual ~PushSensor();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// PushSensor members

    /// <summary>
    /// (optional) port recommendation for starting the push sensor. API does not guarantee that this port will be used. 
    /// </summary>
    int32_t getPort() const;
    bool portIsSet() const;
    void unsetPort();
    void setPort(int32_t value);

protected:
    int32_t m_Port;
    bool m_PortIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_PushSensor_H_ */
