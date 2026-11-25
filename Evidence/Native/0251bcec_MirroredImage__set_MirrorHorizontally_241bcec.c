/* IL2CPP: MirroredImage$$set_MirrorHorizontally
void MirroredImage__set_MirrorHorizontally (MirroredImage_o* __this, bool value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: MirroredImage$$set_MirrorHorizontally
   void MirroredImage__set_MirrorHorizontally (MirroredImage_o* __this, bool value, const
   MethodInfo* method); */

void MirroredImage__set_MirrorHorizontally_241bcec(long *param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x22) == (param_2 & 1)) {
    return;
  }
  *(byte *)(param_1 + 0x22) = param_2 & 1;
                    /* WARNING: Could not recover jumptable at 0x0251bd10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2f8))(param_1,*(undefined8 *)(*param_1 + 0x300));
  return;
}

