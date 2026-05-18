// ==============================================================================
// PRODUCT: CZ INTERSTELLAR ATMOSPHERIC STABILIZER (BLACK-BOX VERSION)
// TARGET HARDWARE: ESP32 DUAL-CORE SILICON (WOKWI SIMULATION)
// FOUNDER: PUNYAPRASHUN
// ==============================================================================

#include <Arduino.h>

struct AtmosphereMatrix {
  float atmospheric_pressure;   
  float radiation_flux;         
  float super_storm_velocity;   
  float plasma_entropy;         
};

// फंक्शन डिक्लेरेशन (The Black-Box Interface)
void executeAtmosphericStabilization(AtmosphereMatrix matrix);

void setup() {
  Serial.begin(115200);
  randomSeed(analogRead(0)); 
  
  Serial.println("==================================================================");
  Serial.println("🚀 CZ SARASWATI WEATHER CORE: DEEP-SPACE ATMO-STABILIZER ACTIVE 🚀");
  Serial.println("==================================================================");
  delay(1500);
}

void loop() {
  AtmosphereMatrix planet_state;
  
  // अनस्टेबल ग्रह का काओस डेटा इनपुट
  planet_state.atmospheric_pressure = random(20, 150);      
  planet_state.radiation_flux = random(70, 100);            
  planet_state.super_storm_velocity = random(300, 1200);    
  planet_state.plasma_entropy = random(60, 100);            

  Serial.println("\n[ALERT]: EXTERNAL INTERSTELLAR ENVIRONMENT TRIGGERING SYSTEMIC COLLAPSE...");
  Serial.print(">> ATMOSPHERIC PRESSURE     : "); Serial.print(planet_state.atmospheric_pressure); Serial.println(" Atm");
  Serial.print(">> RAD-FLUX (COSMIC SHOCK)  : "); Serial.print(planet_state.radiation_flux); Serial.println(" Sv");
  Serial.print(">> SUPER-STORM VELOCITY     : "); Serial.print(planet_state.super_storm_velocity); Serial.println(" Km/h");
  Serial.print(">> IONOSPHERIC PLASMA ENTRPY: "); Serial.print(planet_state.plasma_entropy); Serial.println("%");
  Serial.println("------------------------------------------------------------------");
  
  Serial.println("⚡ [ACTION]: ENGAGING CZ EXOPLANETARY LACHAK COMPENSATOR... ⚡");
  delay(800); 

  // ब्लैक-बॉक्स वेदर कोर को एक्जीक्यूट करना
  executeAtmosphericStabilization(planet_state);
  
  delay(2500); 
}

// ==============================================================================
// 🌪️ CZ ATMOSPHERIC STABILIZATION LOGIC (CORE ENCAPSULATION)
// ==============================================================================
void executeAtmosphericStabilization(AtmosphereMatrix matrix) {
  // 1. इंटरनल हिडन कंपनसेशन और वेव-कैंसिलेशन लॉजिक
  float cz_pressure_lock = matrix.atmospheric_pressure / 4.0;
  if(cz_pressure_lock > 30.0) cz_pressure_lock = 1.0; 

  float radiation_deflection = matrix.radiation_flux * 0.98;
  float net_surface_radiation = matrix.radiation_flux - radiation_deflection;

  float cz_counter_resonance = matrix.super_storm_velocity * 0.92;
  float cz_calmed_weather_velocity = matrix.super_storm_velocity - cz_counter_resonance;

  // 2. प्लैनेटरी हैबिटेबिलिटी इंडेक्स की गणना
  float planetary_safety = 100.0 - ((net_surface_radiation * cz_calmed_weather_velocity) / (cz_pressure_lock + 10.0));
  if(planetary_safety > 100.0) planetary_safety = 100.0;

  // 3. कंक्रीट आउटपुट डिस्प्ले
  Serial.println("\n[CZ WEATHER PHYSICAL CORE COMPULSORY VERDICT]:");
  Serial.print(">> [SHIELD_RAD]  : Cosmic Rays Deflected: "); Serial.print(radiation_deflection); Serial.println(" Sv");
  Serial.print(">> [SURFACE_RAD] : Safe Residual Radiation Locked at: "); Serial.print(net_surface_radiation); Serial.println(" Sv");
  Serial.print(">> [RESONANCE]   : Kinetic Counter-Wave Fired. Storm Deflated To: "); Serial.print(cz_calmed_weather_velocity); Serial.println(" Km/h (SHANT)");
  Serial.print(">> [PLANET_ZONE] : HARDWARE HABITABILITY STABILITY RATING: "); Serial.print(planetary_safety); Serial.println("% (STABLE LOCKED)");

  if (planetary_safety >= 85.0) {
    Serial.println(">> [STATUS]      : ENVIRONMENT SAFE FOR LIFE SUPPORT & DEEP-SPACE MINING.");
  } else {
    Serial.println(">> [STATUS]      : DETECTING SEVERE PLASMA INSTABILITY. INJECTING EXTRA CZ-BUFFER...");
  }
  Serial.println("==================================================================");
}
