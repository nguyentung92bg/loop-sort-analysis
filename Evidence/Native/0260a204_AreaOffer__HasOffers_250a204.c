/* IL2CPP: AreaOffer$$HasOffers
bool AreaOffer__HasOffers (AreaOffers_o* areaOffers, int32_t area, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreaOffer$$HasOffers
   bool AreaOffer__HasOffers (AreaOffers_o* areaOffers, int32_t area, const MethodInfo* method); */

bool AreaOffer__HasOffers_250a204(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lStack_30;
  undefined4 uStack_24;
  
  if ((bRam0000000004f4bdbf & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5440);
    FUN_021f03f8(PTR_DAT_049c9030);
    bRam0000000004f4bdbf = 1;
  }
  lStack_30 = 0;
  if ((param_1 != 0) && (*(long *)(param_1 + 0x18) != 0)) {
                    /* try { // try from 0260a264 to 0270a3db has its CatchHandler @ 0260a264
                       catch() { ... } // from try @ 0260a264 with catch @ 0260a264
                       catch() { ... } // from try @ 0260a940 with catch @ 0260a264
                       catch() { ... } // from try @ 0260ad24 with catch @ 0260a264
                       catch() { ... } // from try @ 0260af50 with catch @ 0260a264
                       catch() { ... } // from try @ 0260b128 with catch @ 0260a264
                       catch() { ... } // from try @ 0260b174 with catch @ 0260a264
                       catch() { ... } // from try @ 0260b1ac with catch @ 0260a264
                       catch() { ... } // from try @ 0260b1f4 with catch @ 0260a264
                       catch() { ... } // from try @ 0260b25c with catch @ 0260a264 */
    uStack_24 = param_2;
    uVar3 = GenericDictionary___Il2CppFullySharedGenericType____Il2CppFullySharedGenericType___TryGetValue_2896098
                      (*(long *)(param_1 + 0x18),&uStack_24,&lStack_30,
                       *(undefined8 *)PTR_DAT_049c9030);
    lVar2 = lStack_30;
    puVar1 = PTR_DAT_049c5440;
    if ((uVar3 & 1) == 0) {
      return false;
    }
    if (lStack_30 != 0) {
      lVar4 = *(long *)PTR_DAT_049c5440;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        FUN_021f0574();
        lVar4 = *(long *)puVar1;
      }
      if (**(long **)(lVar4 + 0xb8) != 0) {
        return *(int *)(lVar2 + 0x18) == *(int *)(**(long **)(lVar4 + 0xb8) + 0x18);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

