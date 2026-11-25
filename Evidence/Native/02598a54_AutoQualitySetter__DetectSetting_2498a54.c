/* IL2CPP: AutoQualitySetter$$DetectSetting
int32_t AutoQualitySetter__DetectSetting (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AutoQualitySetter$$DetectSetting
   int32_t AutoQualitySetter__DetectSetting (const MethodInfo* method); */

undefined4 AutoQualitySetter__DetectSetting_2498a54(void)

{
  undefined *puVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_049c6078;
  if ((bRam0000000004f4baa7 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c6078);
    bRam0000000004f4baa7 = 1;
  }
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  uVar3 = AutoQualitySetter__DetectTierFromHardware_2498b1c();
  if (cRam0000000004f4baec == '\0') {
    FUN_021f03f8(PTR_DAT_049c6078);
    cRam0000000004f4baec = '\x01';
  }
  lVar4 = *(long *)puVar1;
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  cVar2 = cRam0000000004f4baed;
  **(undefined4 **)(lVar4 + 0xb8) = uVar3;
  if (cVar2 == '\0') {
    FUN_021f03f8(puVar1);
    lVar4 = *(long *)puVar1;
    cRam0000000004f4baed = '\x01';
  }
  if (*(int *)(lVar4 + 0xe4) == 0) {
    FUN_021f0574();
    lVar4 = *(long *)puVar1;
  }
  return **(undefined4 **)(lVar4 + 0xb8);
}

