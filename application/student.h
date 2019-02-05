#ifndef STUDENT_H
#define STUDENT_H

#include <QDate>
#include <QString>

class Student
{
public:
    Student();

    Student(const QString &name, const QDate &dateOfBirth, const QString &fatherName,
            const QString &motherName, const QString &naturalness, const QString &IDNumber,
            const QString &IDissuingInstituation, const QString &IDissueDate);

    QString name() const;
    void setName(const QString &name);

    QDate dateOfBirth() const;
    void setDateOfBirth(const QDate &dateOfBirth);

    QString fatherName() const;
    void setFatherName(const QString &fatherName);

    QString motherName() const;
    void setMotherName(const QString &motherName);

    QString naturalness() const;
    void setNaturalness(const QString &naturalness);

    QString IDNumber() const;
    void setIDNumber(const QString &IDNumber);

    QString IDIssuingInstitution() const;
    void setIDIssuingInstitution(const QString &IDissuingInstitution);

    QString IDIssueDate() const;
    void setIDIssueDate(const QString &IDissueDate);

private:
    QString m_name;
    QDate m_dateOfBirth;
    QString m_fatherName;
    QString m_motherName;
    QString m_naturalness;
    QString m_IDNumber;
    QString m_IDIssuingInstitution;
    QString m_IDIssueDate;
};

#endif // STUDENT_H
