// Auto-generated. Do not edit!

// (in-package deepracer_msgs.srv)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------


//-----------------------------------------------------------

class SetVisualTransparenciesRequest {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.link_names = null;
      this.visual_names = null;
      this.transparencies = null;
      this.block = null;
    }
    else {
      if (initObj.hasOwnProperty('link_names')) {
        this.link_names = initObj.link_names
      }
      else {
        this.link_names = [];
      }
      if (initObj.hasOwnProperty('visual_names')) {
        this.visual_names = initObj.visual_names
      }
      else {
        this.visual_names = [];
      }
      if (initObj.hasOwnProperty('transparencies')) {
        this.transparencies = initObj.transparencies
      }
      else {
        this.transparencies = [];
      }
      if (initObj.hasOwnProperty('block')) {
        this.block = initObj.block
      }
      else {
        this.block = false;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetVisualTransparenciesRequest
    // Serialize message field [link_names]
    bufferOffset = _arraySerializer.string(obj.link_names, buffer, bufferOffset, null);
    // Serialize message field [visual_names]
    bufferOffset = _arraySerializer.string(obj.visual_names, buffer, bufferOffset, null);
    // Serialize message field [transparencies]
    bufferOffset = _arraySerializer.float64(obj.transparencies, buffer, bufferOffset, null);
    // Serialize message field [block]
    bufferOffset = _serializer.bool(obj.block, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetVisualTransparenciesRequest
    let len;
    let data = new SetVisualTransparenciesRequest(null);
    // Deserialize message field [link_names]
    data.link_names = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [visual_names]
    data.visual_names = _arrayDeserializer.string(buffer, bufferOffset, null)
    // Deserialize message field [transparencies]
    data.transparencies = _arrayDeserializer.float64(buffer, bufferOffset, null)
    // Deserialize message field [block]
    data.block = _deserializer.bool(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    object.link_names.forEach((val) => {
      length += 4 + val.length;
    });
    object.visual_names.forEach((val) => {
      length += 4 + val.length;
    });
    length += 8 * object.transparencies.length;
    return length + 13;
  }

  static datatype() {
    // Returns string type for a service object
    return 'deepracer_msgs/SetVisualTransparenciesRequest';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'bbffdc7ae2cc20aba81d7dc8dfbcdce6';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    string[] link_names
    string[] visual_names
    float64[] transparencies
    bool block
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetVisualTransparenciesRequest(null);
    if (msg.link_names !== undefined) {
      resolved.link_names = msg.link_names;
    }
    else {
      resolved.link_names = []
    }

    if (msg.visual_names !== undefined) {
      resolved.visual_names = msg.visual_names;
    }
    else {
      resolved.visual_names = []
    }

    if (msg.transparencies !== undefined) {
      resolved.transparencies = msg.transparencies;
    }
    else {
      resolved.transparencies = []
    }

    if (msg.block !== undefined) {
      resolved.block = msg.block;
    }
    else {
      resolved.block = false
    }

    return resolved;
    }
};

class SetVisualTransparenciesResponse {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.success = null;
      this.status_message = null;
      this.status = null;
      this.messages = null;
    }
    else {
      if (initObj.hasOwnProperty('success')) {
        this.success = initObj.success
      }
      else {
        this.success = false;
      }
      if (initObj.hasOwnProperty('status_message')) {
        this.status_message = initObj.status_message
      }
      else {
        this.status_message = '';
      }
      if (initObj.hasOwnProperty('status')) {
        this.status = initObj.status
      }
      else {
        this.status = [];
      }
      if (initObj.hasOwnProperty('messages')) {
        this.messages = initObj.messages
      }
      else {
        this.messages = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type SetVisualTransparenciesResponse
    // Serialize message field [success]
    bufferOffset = _serializer.bool(obj.success, buffer, bufferOffset);
    // Serialize message field [status_message]
    bufferOffset = _serializer.string(obj.status_message, buffer, bufferOffset);
    // Serialize message field [status]
    bufferOffset = _arraySerializer.int8(obj.status, buffer, bufferOffset, null);
    // Serialize message field [messages]
    bufferOffset = _arraySerializer.string(obj.messages, buffer, bufferOffset, null);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type SetVisualTransparenciesResponse
    let len;
    let data = new SetVisualTransparenciesResponse(null);
    // Deserialize message field [success]
    data.success = _deserializer.bool(buffer, bufferOffset);
    // Deserialize message field [status_message]
    data.status_message = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [status]
    data.status = _arrayDeserializer.int8(buffer, bufferOffset, null)
    // Deserialize message field [messages]
    data.messages = _arrayDeserializer.string(buffer, bufferOffset, null)
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += object.status_message.length;
    length += object.status.length;
    object.messages.forEach((val) => {
      length += 4 + val.length;
    });
    return length + 13;
  }

  static datatype() {
    // Returns string type for a service object
    return 'deepracer_msgs/SetVisualTransparenciesResponse';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return 'a0af81bf1f7c2eacb2693173f999072a';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    bool success
    string status_message
    int8[] status                        # status of each request: true if succeeded otherwise false
    string[] messages
    
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new SetVisualTransparenciesResponse(null);
    if (msg.success !== undefined) {
      resolved.success = msg.success;
    }
    else {
      resolved.success = false
    }

    if (msg.status_message !== undefined) {
      resolved.status_message = msg.status_message;
    }
    else {
      resolved.status_message = ''
    }

    if (msg.status !== undefined) {
      resolved.status = msg.status;
    }
    else {
      resolved.status = []
    }

    if (msg.messages !== undefined) {
      resolved.messages = msg.messages;
    }
    else {
      resolved.messages = []
    }

    return resolved;
    }
};

module.exports = {
  Request: SetVisualTransparenciesRequest,
  Response: SetVisualTransparenciesResponse,
  md5sum() { return '34fbd02ec7c4149646080e935ee8f1b0'; },
  datatype() { return 'deepracer_msgs/SetVisualTransparencies'; }
};
