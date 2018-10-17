#!/bin/sh

java -jar bin/swagger-codegen-cli.jar generate -i https://raw.githubusercontent.com/cloudiator/rest-swagger/master/swagger.yaml -l cpprest --artifact-id java-rest --group-id io.github.cloudiator.client --artifact-version 0.3.0-SNAPSHOT --api-package io.github.cloudiator.rest.api --model-package io.github.cloudiator.rest.model --additional-properties serializableModel=true -DhideGenerationTimestamp=true
