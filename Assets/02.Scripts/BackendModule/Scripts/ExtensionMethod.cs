public static class ExtensionMethod
{
    public static bool IsNull(this object obj)
    {
        return ReferenceEquals(obj, null);
    }
}