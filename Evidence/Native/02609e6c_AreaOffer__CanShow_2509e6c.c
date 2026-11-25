/* IL2CPP: AreaOffer$$CanShow
bool AreaOffer__CanShow (AreaOffer_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$CanShow
   bool AreaOffer__CanShow (AreaOffer_o* __this, const MethodInfo* method); */

uint AreaOffer__CanShow_2509e6c(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bdbb & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049c8ff0);
    FUN_021f03f8(PTR_DAT_049c9010);
    bRam0000000004f4bdbb = 1;
  }
  puVar2 = PTR_DAT_049c8ff0;
  puVar1 = PTR_DAT_049c5440;
  uStack_38 = 0;
  if (*(long *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  if (*(char *)(*(long *)(param_1 + 0x38) + 0x10) == '\0') {
    lVar4 = *(long *)PTR_DAT_049c5440;
    if (*(int *)(lVar4 + 0xe4) == 0) {
      FUN_021f0574();
      lVar4 = *(long *)puVar1;
    }
    lVar7 = *(long *)(lVar4 + 0xb8);
    lVar4 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718(lVar4);
    }
    pcVar5 = (char *)thunk_FUN_0224e54c(lVar7 + 0x18,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
    if (*pcVar5 != '\0') goto LAB_02609dc8;
  }
  else {
LAB_02609dc8:
    uStack_38 = AreaOffer__OfferArea_2509788(param_1);
    lVar4 = *(long *)(*(long *)puVar2 + 0x20);
    if ((*(byte *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_02229718(lVar4);
    }
    pcVar5 = (char *)thunk_FUN_0224e54c(&uStack_38,
                                        *(undefined8 *)
                                         (*(long *)(*(long *)(lVar4 + 0xc0) + 8) + 0x80));
    if (*pcVar5 != '\0') {
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      System_Nullable___Il2CppFullySharedGenericStructType___get_Value_2903d64
                (&uStack_38,&uStack_24,*(undefined8 *)PTR_DAT_049c9010);
      if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
        FUN_021f0574();
      }
      uVar3 = AreaOffer__HasOffers_250a204(uVar6,uStack_24);
      goto LAB_02609e50;
    }
  }
  uVar3 = 0;
LAB_02609e50:
  return uVar3 & 1;
}

