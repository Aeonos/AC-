namespace AC{
namespace System{

class String: public AObject{
  private:
  public:
    String();
    String(const char* c_String);
    String(const std::string& stdString);
    String(const String & other);

    virtual ~String();

    virtual std::string GetID() const;

    String operator=(const String& other);
  protected:
    std::string _Primitive;
};

}}