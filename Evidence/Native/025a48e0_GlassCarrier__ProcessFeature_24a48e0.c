/* IL2CPP: GlassCarrier$$ProcessFeature
void GlassCarrier__ProcessFeature (GlassCarrier_o* __this, int32_t featureType, System_String_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: GlassCarrier$$ProcessFeature
   void GlassCarrier__ProcessFeature (GlassCarrier_o* __this, int32_t featureType, System_String_o*
   data, const MethodInfo* method); */

void GlassCarrier__ProcessFeature_24a48e0(long param_1,int param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_2 != 0x1e) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0xa8);
  uVar1 = UnityEngine_Component__get_gameObject_3c187f4(param_1,0);
  if (lVar2 != 0) {
    if ((bRam0000000004f4b6d2 & 1) == 0) {
      FUN_021f03f8(PTR_DAT_049bb8b0,uVar1,0);
      bRam0000000004f4b6d2 = 1;
    }
    if (*(long *)(lVar2 + 0x210) != 0) {
      System_Collections_Generic_HashSet___Il2CppFullySharedGenericType___Add_28a3498
                (*(long *)(lVar2 + 0x210),uVar1,*(undefined8 *)PTR_DAT_049bb8b0);
      *(undefined1 *)(lVar2 + 0x1b3) = 1;
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

