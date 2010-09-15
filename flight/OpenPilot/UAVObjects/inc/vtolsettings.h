/**
 ******************************************************************************
 * @addtogroup UAVObjects OpenPilot UAVObjects
 * @{ 
 * @addtogroup VTOLSettings VTOLSettings 
 * @brief Sets the mixing coefficients for all the motors on a multicoptor
 *
 * Autogenerated files and functions for VTOLSettings Object
 
 * @{ 
 *
 * @file       vtolsettings.h
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * @brief      Implementation of the VTOLSettings object. This file has been 
 *             automatically generated by the UAVObjectGenerator.
 * 
 * @note       Object definition file: vtolsettings.xml. 
 *             This is an automatically generated file.
 *             DO NOT modify manually.
 *
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef VTOLSETTINGS_H
#define VTOLSETTINGS_H

// Object constants
#define VTOLSETTINGS_OBJID 254340004U
#define VTOLSETTINGS_NAME "VTOLSettings"
#define VTOLSETTINGS_METANAME "VTOLSettingsMeta"
#define VTOLSETTINGS_ISSINGLEINST 1
#define VTOLSETTINGS_ISSETTINGS 1
#define VTOLSETTINGS_NUMBYTES sizeof(VTOLSettingsData)

// Object access macros
/**
 * @function VTOLSettingsGet(dataOut)
 * @brief Populate a VTOLSettingsData object
 * @param[out] dataOut 
 */
#define VTOLSettingsGet(dataOut) UAVObjGetData(VTOLSettingsHandle(), dataOut)
#define VTOLSettingsSet(dataIn) UAVObjSetData(VTOLSettingsHandle(), dataIn)
#define VTOLSettingsInstGet(instId, dataOut) UAVObjGetInstanceData(VTOLSettingsHandle(), instId, dataOut)
#define VTOLSettingsInstSet(instId, dataIn) UAVObjSetInstanceData(VTOLSettingsHandle(), instId, dataIn)
#define VTOLSettingsConnectQueue(queue) UAVObjConnectQueue(VTOLSettingsHandle(), queue, EV_MASK_ALL_UPDATES)
#define VTOLSettingsConnectCallback(cb) UAVObjConnectCallback(VTOLSettingsHandle(), cb, EV_MASK_ALL_UPDATES)
#define VTOLSettingsCreateInstance() UAVObjCreateInstance(VTOLSettingsHandle())
#define VTOLSettingsRequestUpdate() UAVObjRequestUpdate(VTOLSettingsHandle())
#define VTOLSettingsRequestInstUpdate(instId) UAVObjRequestInstanceUpdate(VTOLSettingsHandle(), instId)
#define VTOLSettingsUpdated() UAVObjUpdated(VTOLSettingsHandle())
#define VTOLSettingsInstUpdated(instId) UAVObjUpdated(VTOLSettingsHandle(), instId)
#define VTOLSettingsGetMetadata(dataOut) UAVObjGetMetadata(VTOLSettingsHandle(), dataOut)
#define VTOLSettingsSetMetadata(dataIn) UAVObjSetMetadata(VTOLSettingsHandle(), dataIn)
#define VTOLSettingsReadOnly(dataIn) UAVObjReadOnly(VTOLSettingsHandle())

// Object data
typedef struct {
    float MotorN[4];
    float MotorNE[4];
    float MotorE[4];
    float MotorSE[4];
    float MotorS[4];
    float MotorSW[4];
    float MotorW[4];
    float MotorNW[4];

} __attribute__((packed)) VTOLSettingsData;

// Field information
// Field MotorN information
/* Array element names for field MotorN */
typedef enum { VTOLSETTINGS_MOTORN_THROTTLE=0, VTOLSETTINGS_MOTORN_ROLL=1, VTOLSETTINGS_MOTORN_PITCH=2, VTOLSETTINGS_MOTORN_YAW=3 } VTOLSettingsMotorNElem;
/* Number of elements for field MotorN */
#define VTOLSETTINGS_MOTORN_NUMELEM 4
// Field MotorNE information
/* Array element names for field MotorNE */
typedef enum { VTOLSETTINGS_MOTORNE_THROTTLE=0, VTOLSETTINGS_MOTORNE_ROLL=1, VTOLSETTINGS_MOTORNE_PITCH=2, VTOLSETTINGS_MOTORNE_YAW=3 } VTOLSettingsMotorNEElem;
/* Number of elements for field MotorNE */
#define VTOLSETTINGS_MOTORNE_NUMELEM 4
// Field MotorE information
/* Array element names for field MotorE */
typedef enum { VTOLSETTINGS_MOTORE_THROTTLE=0, VTOLSETTINGS_MOTORE_ROLL=1, VTOLSETTINGS_MOTORE_PITCH=2, VTOLSETTINGS_MOTORE_YAW=3 } VTOLSettingsMotorEElem;
/* Number of elements for field MotorE */
#define VTOLSETTINGS_MOTORE_NUMELEM 4
// Field MotorSE information
/* Array element names for field MotorSE */
typedef enum { VTOLSETTINGS_MOTORSE_THROTTLE=0, VTOLSETTINGS_MOTORSE_ROLL=1, VTOLSETTINGS_MOTORSE_PITCH=2, VTOLSETTINGS_MOTORSE_YAW=3 } VTOLSettingsMotorSEElem;
/* Number of elements for field MotorSE */
#define VTOLSETTINGS_MOTORSE_NUMELEM 4
// Field MotorS information
/* Array element names for field MotorS */
typedef enum { VTOLSETTINGS_MOTORS_THROTTLE=0, VTOLSETTINGS_MOTORS_ROLL=1, VTOLSETTINGS_MOTORS_PITCH=2, VTOLSETTINGS_MOTORS_YAW=3 } VTOLSettingsMotorSElem;
/* Number of elements for field MotorS */
#define VTOLSETTINGS_MOTORS_NUMELEM 4
// Field MotorSW information
/* Array element names for field MotorSW */
typedef enum { VTOLSETTINGS_MOTORSW_THROTTLE=0, VTOLSETTINGS_MOTORSW_ROLL=1, VTOLSETTINGS_MOTORSW_PITCH=2, VTOLSETTINGS_MOTORSW_YAW=3 } VTOLSettingsMotorSWElem;
/* Number of elements for field MotorSW */
#define VTOLSETTINGS_MOTORSW_NUMELEM 4
// Field MotorW information
/* Array element names for field MotorW */
typedef enum { VTOLSETTINGS_MOTORW_THROTTLE=0, VTOLSETTINGS_MOTORW_ROLL=1, VTOLSETTINGS_MOTORW_PITCH=2, VTOLSETTINGS_MOTORW_YAW=3 } VTOLSettingsMotorWElem;
/* Number of elements for field MotorW */
#define VTOLSETTINGS_MOTORW_NUMELEM 4
// Field MotorNW information
/* Array element names for field MotorNW */
typedef enum { VTOLSETTINGS_MOTORNW_THROTTLE=0, VTOLSETTINGS_MOTORNW_ROLL=1, VTOLSETTINGS_MOTORNW_PITCH=2, VTOLSETTINGS_MOTORNW_YAW=3 } VTOLSettingsMotorNWElem;
/* Number of elements for field MotorNW */
#define VTOLSETTINGS_MOTORNW_NUMELEM 4


// Generic interface functions
int32_t VTOLSettingsInitialize();
UAVObjHandle VTOLSettingsHandle();

#endif // VTOLSETTINGS_H

/**
 * @}
 * @}
 */