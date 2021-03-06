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
 * Queue.h
 *
 * Represents a queued task within the system. Used to execute long running requests. 
 */

#ifndef IO_GITHUB_CLOUDIATOR_REST_MODEL_Queue_H_
#define IO_GITHUB_CLOUDIATOR_REST_MODEL_Queue_H_


#include "../ModelBase.h"

#include <cpprest/details/basic_types.h>
#include "QueueStatus.h"

namespace io {
namespace github {
namespace cloudiator {
namespace rest {
namespace model {

/// <summary>
/// Represents a queued task within the system. Used to execute long running requests. 
/// </summary>
class  Queue
    : public ModelBase
{
public:
    Queue();
    virtual ~Queue();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    void fromJson(web::json::value& json) override;

    void toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) const override;
    void fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& namePrefix) override;

    /////////////////////////////////////////////
    /// Queue members

    /// <summary>
    /// Unique identifier for the queued task
    /// </summary>
    utility::string_t getId() const;
    bool idIsSet() const;
    void unsetId();
    void setId(utility::string_t value);
    /// <summary>
    /// 
    /// </summary>
    std::shared_ptr<QueueStatus> getStatus() const;
    bool statusIsSet() const;
    void unsetStatus();
    void setStatus(std::shared_ptr<QueueStatus> value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getStart() const;
    bool startIsSet() const;
    void unsetStart();
    void setStart(utility::datetime value);
    /// <summary>
    /// 
    /// </summary>
    utility::datetime getEnd() const;
    bool endIsSet() const;
    void unsetEnd();
    void setEnd(utility::datetime value);
    /// <summary>
    /// Gives human-readable feedback
    /// </summary>
    utility::string_t getDiagnosis() const;
    bool diagnosisIsSet() const;
    void unsetDiagnosis();
    void setDiagnosis(utility::string_t value);
    /// <summary>
    /// Location of the original entity
    /// </summary>
    utility::string_t getLocation() const;
    bool locationIsSet() const;
    void unsetLocation();
    void setLocation(utility::string_t value);

protected:
    utility::string_t m_Id;
    bool m_IdIsSet;
    std::shared_ptr<QueueStatus> m_Status;
    bool m_StatusIsSet;
    utility::datetime m_Start;
    bool m_StartIsSet;
    utility::datetime m_End;
    bool m_EndIsSet;
    utility::string_t m_Diagnosis;
    bool m_DiagnosisIsSet;
    utility::string_t m_Location;
    bool m_LocationIsSet;
};

}
}
}
}
}

#endif /* IO_GITHUB_CLOUDIATOR_REST_MODEL_Queue_H_ */
